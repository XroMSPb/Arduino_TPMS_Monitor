extern void GetPreferredIndexStr(uint32_t ID, char* sptr);
extern int16_t GetDisplayIndexFromID(uint32_t ID);
extern int16_t GetDisplayIndexFromTyreIndex(int16_t i);
extern void MatchIDandUpdate(uint32_t id ,uint16_t status, float realtemp,float realpressure);
extern bool IsValidSync(uint16_t Width);
extern bool IsValidShort(uint16_t Width);
extern bool IsValidLong(uint16_t Width);
extern bool IsEndMarker(uint16_t Width);
extern bool IsTooShort(uint16_t Width);
extern bool IsTooLong(uint16_t Width);
extern int16_t ValidateBit();
extern int16_t ValidateBit(int16_t Index);
extern int16_t GetNumberOfBits(int16_t Index);
extern  uint16_t Compute_CRC16( int16_t bcount, uint16_t Poly,   uint16_t crc_init );
extern  uint16_t Compute_CRC16(int16_t start, int16_t bcount,  uint16_t Poly,   uint16_t crc_init );
extern uint8_t Compute_CRC8( int16_t bcount,  uint8_t Poly, uint8_t crc_init );
extern uint8_t Compute_CRC_XOR(int16_t Start, int16_t bcount, uint8_t crc_init);
extern uint8_t Compute_CRC_SUM(int16_t Start, int16_t bcount, uint8_t crc_init);
extern int16_t GetRSSI_dbm();
extern int16_t ManchesterDecode(int16_t StartIndex);
extern int16_t ManchesterDecode_ZeroBit(int16_t StartIndex);
extern int16_t DifferentialManchesterDecode(int16_t StartIndex);
extern void InvertBitBuffer();
extern int16_t DecodeBitArray(int16_t StartIndex, uint8_t ShiftRightBitCount);
extern int16_t DecodeBitArray( uint8_t ShiftRightBitCount);
extern int16_t FindManchesterStart(const uint8_t *pattern,int16_t pattern_bits_len );
extern void PrintTimings(uint8_t StartPoint, uint16_t Count);
extern void PrintBytes(uint16_t Count);
extern void PrintData(int16_t StartPos, uint16_t Count);
extern void PrintData(int16_t StartPos, uint16_t Count, bool ShowHex);
extern void PrintManchesterData(int16_t StartPos, uint16_t Count, bool ShowHex);
extern void InvertBitBuffer();
extern float DegC_To_DegF(float DegC);
extern float DegF_To_DegC(float DegF);
extern float DegC_To_DegK(float DegC);
extern float DegF_To_DegK(float DegF);
extern float DegC_To_DegF(float DegC);
extern float DegF_To_DegC(float DegF);
extern double PSI_To_BAR(double Pressure_PSI);
extern double PSI_To_KPA(double Pressure_PSI);
extern double BAR_To_PSI(double Pressure_BAR);
extern double KPA_To_PSI(double Pressure_KPA);
extern double ConvertPressureForDisplay(double Pressure_PSI);



extern uint8_t ReadFIFO();
extern uint8_t Get_RX_FIFO_Count();
extern void ClearRXBuffer();
extern void PulseDebugPin(int16_t width_us);
