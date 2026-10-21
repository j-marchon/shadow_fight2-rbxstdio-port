// TypeDefIndex 3225
// Namespace: 
// [Usage(64)]
// public class DOJKMMDFBCJ : Attribute
// Fields:
//   public Regex NEIONLMBMDE; // 0x10
//   public Regex CCDLMHMOPKK; // 0x18
//   public bool IOFAJLKACBI; // 0x20
//   public DOJKMMDFBCJ.EAMEJLKAHFI NAPDMLAGBJC; // 0x28

// ===== public void .ctor(string HDJCAGEJDBD, string NKAGMFPKADL = "(GET|HEAD)", bool HEEKFKOMCED = True)  [RVA 0x3504C0C]
// DOJKMMDFBCJ$$.ctor @ RVA 0x3504C0C

void DOJKMMDFBCJ___ctor(DOJKMMDFBCJ_o *__this,System_String_o *HDJCAGEJDBD,
                       System_String_o *NKAGMFPKADL,bool HEEKFKOMCED,MethodInfo *method)

{
  System_Text_RegularExpressions_Regex_o *pSVar1;
  System_Text_RegularExpressions_Regex_o **ppSVar2;
  
  if ((DAT_04568890 & 1) == 0) {
    FUN_01bab630(&System_Text_RegularExpressions_Regex_TypeInfo);
    DAT_04568890 = 1;
  }
  System_Attribute___ctor((System_Attribute_o *)__this,(MethodInfo *)0x0);
  pSVar1 = (System_Text_RegularExpressions_Regex_o *)
           thunk_FUN_01bda818(System_Text_RegularExpressions_Regex_TypeInfo);
  System_Text_RegularExpressions_Regex___ctor(pSVar1,HDJCAGEJDBD,1,(MethodInfo *)0x0);
  (__this->fields).NEIONLMBMDE = pSVar1;
  thunk_FUN_01c20e04(&__this->fields,pSVar1);
  pSVar1 = (System_Text_RegularExpressions_Regex_o *)
           thunk_FUN_01bda818(System_Text_RegularExpressions_Regex_TypeInfo);
  System_Text_RegularExpressions_Regex___ctor(pSVar1,NKAGMFPKADL,(MethodInfo *)0x0);
  ppSVar2 = &(__this->fields).CCDLMHMOPKK;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  (__this->fields).IOFAJLKACBI = HEEKFKOMCED;
  return;
}

