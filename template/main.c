int main(int argc, char **argv)
{
    int c = 0;

    while (1)
    {
     static struct option long_opt[] =
         {
             {"help",  0, 0, 'h'},
             {"config", 1, 0, 'c'},
             {0,0,0,0}
         };

     int optIdx;

     if((c = getopt_long(argc, argv, "c:h", long_opt, &optIdx)) == -1)
      break;

     switch( c )
     {
        case 'h':
             usage(argv[0]);
             return(-1);

        case 'c':
             printf("option 'c' selected, filename: %s\n", optarg);
             return(1);

        default:
             usage(argv[0]);
             return(-1);
      }
    }

    printf("Excellent!!!\n");
    return 0;
}
