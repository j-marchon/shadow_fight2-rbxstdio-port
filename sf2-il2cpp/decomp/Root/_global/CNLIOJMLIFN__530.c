// TypeDefIndex 530
// Namespace: 
// public class CNLIOJMLIFN : CABNDLLKIEL
// Fields:
//   public const int ELFMOFDOJKJ = -1;
//   private string <COIPKAKHDFP>k__BackingField; // 0x10
//   private int <AJBLFMPFEIO>k__BackingField; // 0x18

// ===== public override string ToString()  [RVA 0x3596438]
// CNLIOJMLIFN$$ToString @ RVA 0x3596438

System_String_o * CNLIOJMLIFN__ToString(CNLIOJMLIFN_o *__this,MethodInfo *method)

{
  Il2CppObject *arg1;
  System_String_o *pSVar1;
  int32_t local_24;
  
                    /* try { // try from 03696448 to 037964cb has its CatchHandler @ 036965a4 */
  if ((DAT_04568da4 & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&StringLiteral_22295/*"{0} : {1}"*/);
    DAT_04568da4 = 1;
  }
  local_24 = (__this->fields)._AJBLFMPFEIO_k__BackingField;
  pSVar1 = (__this->fields)._COIPKAKHDFP_k__BackingField;
  arg1 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_24);
  pSVar1 = System_String__Format(StringLiteral_22295/*"{0} : {1}"*/,(Il2CppObject *)pSVar1,arg1,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public void HCOCAAIGNNL(string CJNHFNHJHPE)  [RVA 0x35964C4]
// CNLIOJMLIFN$$HCOCAAIGNNL @ RVA 0x35964C4

void CNLIOJMLIFN__HCOCAAIGNNL(CNLIOJMLIFN_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._COIPKAKHDFP_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void .ctor()  [RVA 0x35964CC]
// CNLIOJMLIFN$$.ctor @ RVA 0x35964CC

void CNLIOJMLIFN___ctor(CNLIOJMLIFN_o *__this,MethodInfo *method)

{
  (__this->fields)._AJBLFMPFEIO_k__BackingField = -1;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void PKPLAKAMOPO(int CJNHFNHJHPE)  [RVA 0x35964DC]
// CNLIOJMLIFN$$PKPLAKAMOPO @ RVA 0x35964DC

void CNLIOJMLIFN__PKPLAKAMOPO(CNLIOJMLIFN_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._AJBLFMPFEIO_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public int CNKOOLDMAGC()  [RVA 0x35964E4]
// CNLIOJMLIFN$$CNKOOLDMAGC @ RVA 0x35964E4

int32_t CNLIOJMLIFN__CNKOOLDMAGC(CNLIOJMLIFN_o *__this,MethodInfo *method)

{
  return (__this->fields)._AJBLFMPFEIO_k__BackingField;
}


// ===== public string KCHJCGEMCGE()  [RVA 0x35964EC]
// CNLIOJMLIFN$$KCHJCGEMCGE @ RVA 0x35964EC

System_String_o * CNLIOJMLIFN__KCHJCGEMCGE(CNLIOJMLIFN_o *__this,MethodInfo *method)

{
  return (__this->fields)._COIPKAKHDFP_k__BackingField;
}

