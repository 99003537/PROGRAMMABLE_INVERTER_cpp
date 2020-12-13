#ifndef MYCLASS_H
#define MYCLASS_H

/**
* myclass calculates parameters of operation of inverter with respect to load.
* objects of myclass represents instantaneous state in inverter operation.
*/
class myclass
{
    public:

        myclass();
        myclass(int i);

///@note iload represents total current load requirement of load.
       float iload;

        float error_DT;

        float dutycycle(float error);

        int set_iload(int i);

        void sequence(float m);

        float error_cal();

        void delay( float fraction);



        virtual ~myclass();


    protected:

    private:

///@note iconv. represents current supplied by inverter.
       float iconv;

///@note ibat represents constant current provided by battery.
       float ibat;

};

#endif // MYCLASS_H
