// TypeDefIndex 844
// Namespace: 
// public class LJNDBPEOILF : CABNDLLKIEL
// Fields:
//   private int <MDAJFAPLLOH>k__BackingField; // 0x10
//   private int <PFHJDMOFFOG>k__BackingField; // 0x14
//   private int <HJCAAIENJFP>k__BackingField; // 0x18
//   private int <LMJLNBNGPPM>k__BackingField; // 0x1C
//   private int <KGMPHCIIKCJ>k__BackingField; // 0x20

// ===== public void PEMJOKFFAMO(int CJNHFNHJHPE)  [RVA 0x3084CA0]
// LJNDBPEOILF$$PEMJOKFFAMO @ RVA 0x3084CA0

void LJNDBPEOILF__PEMJOKFFAMO(LJNDBPEOILF_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._MDAJFAPLLOH_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public void GJALCAIHMIJ(int CJNHFNHJHPE)  [RVA 0x3084CA8]
// LJNDBPEOILF$$GJALCAIHMIJ @ RVA 0x3084CA8

void LJNDBPEOILF__GJALCAIHMIJ(LJNDBPEOILF_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._HJCAAIENJFP_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public void LNMOKCOEPMA(int CJNHFNHJHPE)  [RVA 0x3084CB0]
// LJNDBPEOILF$$LNMOKCOEPMA @ RVA 0x3084CB0

void LJNDBPEOILF__LNMOKCOEPMA(LJNDBPEOILF_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._PFHJDMOFFOG_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public override string ToString()  [RVA 0x3084CB8]
// LJNDBPEOILF$$ToString @ RVA 0x3084CB8

System_String_o * LJNDBPEOILF__ToString(LJNDBPEOILF_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  int32_t local_24;
  
  if ((DAT_04566017 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04566017 = 1;
  }
  local_24 = (__this->fields)._PFHJDMOFFOG_k__BackingField;
  pSVar2 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
  pSVar1 = StringLiteral_1/*""*/;
  if (pSVar2 != (System_String_o *)0x0) {
    pSVar1 = pSVar2;
  }
  return pSVar1;
}


// ===== public int GAHECNHDOKC()  [RVA 0x3084D40]
// LJNDBPEOILF$$GAHECNHDOKC @ RVA 0x3084D40

int32_t LJNDBPEOILF__GAHECNHDOKC(LJNDBPEOILF_o *__this,MethodInfo *method)

{
  return (__this->fields)._HJCAAIENJFP_k__BackingField;
}


// ===== public void .ctor()  [RVA 0x3084D48]
// LJNDBPEOILF$$.ctor @ RVA 0x3084D48

void LJNDBPEOILF___ctor(LJNDBPEOILF_o *__this,MethodInfo *method)

{
  (__this->fields)._MDAJFAPLLOH_k__BackingField = -1;
  (__this->fields)._PFHJDMOFFOG_k__BackingField = -1;
  (__this->fields)._HJCAAIENJFP_k__BackingField = -1;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void EFNIGEIKLGB(int CJNHFNHJHPE)  [RVA 0x3084D60]
// LJNDBPEOILF$$EFNIGEIKLGB @ RVA 0x3084D60

void LJNDBPEOILF__EFNIGEIKLGB(LJNDBPEOILF_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._KGMPHCIIKCJ_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public int NOOBJABOFAK()  [RVA 0x3084D68]
// LJNDBPEOILF$$NOOBJABOFAK @ RVA 0x3084D68

int32_t LJNDBPEOILF__NOOBJABOFAK(LJNDBPEOILF_o *__this,MethodInfo *method)

{
  return (__this->fields)._PFHJDMOFFOG_k__BackingField;
}


// ===== public void KDCGBEGHJLD(int CJNHFNHJHPE)  [RVA 0x3084D70]
// LJNDBPEOILF$$KDCGBEGHJLD @ RVA 0x3084D70

void LJNDBPEOILF__KDCGBEGHJLD(LJNDBPEOILF_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._LMJLNBNGPPM_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public string KCHJCGEMCGE()  [RVA 0x3084D20]
// LJNDBPEOILF$$KCHJCGEMCGE @ RVA 0x3084D20

System_String_o * LJNDBPEOILF__KCHJCGEMCGE(LJNDBPEOILF_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  int32_t local_4;
  
  local_4 = (__this->fields)._PFHJDMOFFOG_k__BackingField;
  pSVar1 = System_Int32__ToString((int32_t)&local_4,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public int GFJIIIPHJJL()  [RVA 0x3084D78]
// LJNDBPEOILF$$GFJIIIPHJJL @ RVA 0x3084D78

int32_t LJNDBPEOILF__GFJIIIPHJJL(LJNDBPEOILF_o *__this,MethodInfo *method)

{
  return (__this->fields)._KGMPHCIIKCJ_k__BackingField;
}


// ===== public int BPNLJDPLMID()  [RVA 0x3084D80]
// LJNDBPEOILF$$BPNLJDPLMID @ RVA 0x3084D80

int32_t LJNDBPEOILF__BPNLJDPLMID(LJNDBPEOILF_o *__this,MethodInfo *method)

{
  return (__this->fields)._LMJLNBNGPPM_k__BackingField;
}


// ===== public int NOJELIALAIO()  [RVA 0x3084D88]
// LJNDBPEOILF$$NOJELIALAIO @ RVA 0x3084D88

int32_t LJNDBPEOILF__NOJELIALAIO(LJNDBPEOILF_o *__this,MethodInfo *method)

{
  return (__this->fields)._MDAJFAPLLOH_k__BackingField;
}

