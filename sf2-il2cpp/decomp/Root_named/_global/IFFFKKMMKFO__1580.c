// TypeDefIndex 1580
// Namespace: 
// public class IFFFKKMMKFO
// Fields:
//   private bool <FPBBMLACBJE>k__BackingField; // 0x10
//   public float ECNFDCBBAEN; // 0x14
//   public float JOAHABGBLEF; // 0x18
//   public PMCKBFPNGOD FPPPAMFABJP; // 0x1C
//   public IOGEICNIGGH IEONGHCHNNA; // 0x20
//   private GKLPDMLELJF <IPNPNPOLCFO>k__BackingField; // 0x28
//   public JKDFEBLBMOF AMAMLPJLCFG; // 0x30
//   public int KOPODBECOEJ; // 0x38
//   private DateTime <FAIHCFMGFBD>k__BackingField; // 0x40

// ===== private void OCMCDDPHOBK(DateTime CJNHFNHJHPE)  [RVA 0x31B214C]
// IFFFKKMMKFO$$OCMCDDPHOBK @ RVA 0x31B214C

void IFFFKKMMKFO__OCMCDDPHOBK
               (IFFFKKMMKFO_o *__this,System_DateTime_o CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._FAIHCFMGFBD_k__BackingField.fields._dateData =
       (uint64_t)CJNHFNHJHPE.fields._dateData;
  return;
}


// ===== public DateTime OLOOKKEPADC()  [RVA 0x31B2154]
// IFFFKKMMKFO$$OLOOKKEPADC @ RVA 0x31B2154

System_DateTime_o IFFFKKMMKFO__OLOOKKEPADC(IFFFKKMMKFO_o *__this,MethodInfo *method)

{
  return (System_DateTime_o)(__this->fields)._FAIHCFMGFBD_k__BackingField.fields._dateData;
}


// ===== public GKLPDMLELJF JCKINNMKHBA()  [RVA 0x31B215C]
// IFFFKKMMKFO$$JCKINNMKHBA @ RVA 0x31B215C

GKLPDMLELJF_o * IFFFKKMMKFO__JCKINNMKHBA(IFFFKKMMKFO_o *__this,MethodInfo *method)

{
  return (__this->fields)._IPNPNPOLCFO_k__BackingField;
}


// ===== private void IIBFFDJAKFB(GKLPDMLELJF CJNHFNHJHPE)  [RVA 0x31B2164]
// IFFFKKMMKFO$$IIBFFDJAKFB @ RVA 0x31B2164

void IFFFKKMMKFO__IIBFFDJAKFB(IFFFKKMMKFO_o *__this,GKLPDMLELJF_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._IPNPNPOLCFO_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void .ctor(GKLPDMLELJF HEHMPFLAEGE)  [RVA 0x31B216C]
// IFFFKKMMKFO$$.ctor @ RVA 0x31B216C

void IFFFKKMMKFO___ctor(IFFFKKMMKFO_o *__this,GKLPDMLELJF_o *HEHMPFLAEGE,MethodInfo *method)

{
  int32_t iVar1;
  GKLPDMLELJF_o **ppGVar2;
  PlayerData_o *__this_00;
  int64_t iVar3;
  JKDFEBLBMOF_o **ppJVar4;
  System_DateTime_o SVar5;
  long lVar6;
  
                    /* try { // try from 032b218c to 033b2193 has its CatchHandler @ 032b2378 */
  if ((DAT_04566b86 & 1) == 0) {
    FUN_01bab630(&System_DateTime_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04566b86 = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  ppGVar2 = &(__this->fields)._IPNPNPOLCFO_k__BackingField;
  *ppGVar2 = HEHMPFLAEGE;
  (__this->fields).ECNFDCBBAEN = 0.0;
  (__this->fields).JOAHABGBLEF = 0.0;
  (__this->fields).KOPODBECOEJ = -1;
  thunk_FUN_01c20e04(ppGVar2,HEHMPFLAEGE);
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 032b21ec to 033b2207 has its CatchHandler @ 032b2368 */
  __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
  if ((__this_00 != (PlayerData_o *)0x0) &&
     (iVar3 = PlayerData__APCMGOCHMGC(__this_00,(MethodInfo *)0x0),
     HEHMPFLAEGE != (GKLPDMLELJF_o *)0x0)) {
    lVar6 = (HEHMPFLAEGE->fields).ANAJGHJEEOC;
                    /* try { // try from 032b220c to 033b2213 has its CatchHandler @ 032b236c */
    (__this->fields).FPPPAMFABJP = 1;
    (__this->fields)._FPBBMLACBJE_k__BackingField = iVar3 == lVar6;
    iVar1 = (HEHMPFLAEGE->fields).PFJPLCAIGJH;
    ppJVar4 = &(__this->fields).AMAMLPJLCFG;
                    /* try { // try from 032b222c to 033b2233 has its CatchHandler @ 032b2364 */
    *ppJVar4 = (JKDFEBLBMOF_o *)0x0;
    (__this->fields).IEONGHCHNNA = iVar1;
    thunk_FUN_01c20e04(ppJVar4,0);
    if ((System_DateTime_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 032b2248 to 033b2253 has its CatchHandler @ 032b2360 */
      thunk_FUN_01ba7564();
    }
    SVar5 = System_DateTime__get_Now((MethodInfo *)0x0);
    (__this->fields)._FAIHCFMGFBD_k__BackingField.fields._dateData =
         (uint64_t)SVar5.fields._dateData;
                    /* try { // try from 032b2260 to 033b2267 has its CatchHandler @ 032b235c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void OEHLOKAPCJP(DateTime LFJGFLNMBMC)  [RVA 0x31B226C]
// IFFFKKMMKFO$$OEHLOKAPCJP @ RVA 0x31B226C

void IFFFKKMMKFO__OEHLOKAPCJP
               (IFFFKKMMKFO_o *__this,System_DateTime_o LFJGFLNMBMC,MethodInfo *method)

{
                    /* try { // try from 032b226c to 033b2277 has its CatchHandler @ 032b2374 */
  (__this->fields)._FAIHCFMGFBD_k__BackingField.fields._dateData =
       (uint64_t)LFJGFLNMBMC.fields._dateData;
  return;
}


// ===== private void OMNLHAIJPGI(bool CJNHFNHJHPE)  [RVA 0x31B2274]
// IFFFKKMMKFO$$OMNLHAIJPGI @ RVA 0x31B2274

void IFFFKKMMKFO__OMNLHAIJPGI(IFFFKKMMKFO_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
                    /* try { // try from 032b2278 to 033b234b has its CatchHandler @ 032b202c */
  (__this->fields)._FPBBMLACBJE_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public void LLCONNGHGKD(GKLPDMLELJF HEHMPFLAEGE)  [RVA 0x31B2280]
// IFFFKKMMKFO$$LLCONNGHGKD @ RVA 0x31B2280

void IFFFKKMMKFO__LLCONNGHGKD(IFFFKKMMKFO_o *__this,GKLPDMLELJF_o *HEHMPFLAEGE,MethodInfo *method)

{
  int32_t iVar1;
  GKLPDMLELJF_o **ppGVar2;
  PlayerData_o *__this_00;
  int64_t iVar3;
  System_DateTime_o SVar4;
  
  if ((DAT_04566b87 & 1) == 0) {
    FUN_01bab630(&System_DateTime_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04566b87 = 1;
  }
  if (HEHMPFLAEGE != (GKLPDMLELJF_o *)0x0) {
    iVar1 = (HEHMPFLAEGE->fields).PFJPLCAIGJH;
    ppGVar2 = &(__this->fields)._IPNPNPOLCFO_k__BackingField;
    *ppGVar2 = HEHMPFLAEGE;
    (__this->fields).IEONGHCHNNA = iVar1;
    thunk_FUN_01c20e04(ppGVar2,HEHMPFLAEGE);
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    if (__this_00 != (PlayerData_o *)0x0) {
      iVar3 = PlayerData__APCMGOCHMGC(__this_00,(MethodInfo *)0x0);
      (__this->fields)._FPBBMLACBJE_k__BackingField = iVar3 == (HEHMPFLAEGE->fields).ANAJGHJEEOC;
      if ((System_DateTime_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      SVar4 = System_DateTime__get_Now((MethodInfo *)0x0);
      (__this->fields)._FAIHCFMGFBD_k__BackingField.fields._dateData =
           (uint64_t)SVar4.fields._dateData;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool HODPOCMNNIN()  [RVA 0x31B2348]
// IFFFKKMMKFO$$HODPOCMNNIN @ RVA 0x31B2348

bool IFFFKKMMKFO__HODPOCMNNIN(IFFFKKMMKFO_o *__this,MethodInfo *method)

{
                    /* try { // try from 032b234c to 033b234f has its CatchHandler @ 032b2370 */
  return (__this->fields)._FPBBMLACBJE_k__BackingField;
}

