
   Port::Port(uint16_t portnumber)
   {
    this->portnumber= portnumber;
   }
    Port::~Port()
    {

    }

    Port8Bit::Port8Bit(uint16_t portnumber):Port(portnumber)
    {

    }
    ~Port8Bit();
    virtual void Write(uint8_t data);
    virtual uint8_t Read();
};