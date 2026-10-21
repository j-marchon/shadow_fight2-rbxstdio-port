// TypeDefIndex 1153
// Namespace: 
// public class NPKKNCCEIND
// Fields:
//   public readonly string JIJLBFGKNJK; // 0x10
//   public readonly string OPBJKMDPKLG; // 0x18
//   public readonly string PCAIPKLGAHP; // 0x20
//   public readonly int JAICMIMBIOA; // 0x28

// ===== public void .ctor(string AGKCKBDAOEI, int KAPOHFHHDEP, HBNENINHPGF OAOLCGAIILM)  [RVA 0x3101864]
// NPKKNCCEIND$$.ctor @ RVA 0x3101864

void NPKKNCCEIND___ctor(NPKKNCCEIND_o *__this,System_String_o *AGKCKBDAOEI,int32_t KAPOHFHHDEP,
                       HBNENINHPGF_o *OAOLCGAIILM,MethodInfo *method)

{
  RaidConfig_o *__this_00;
  RaidConfig_EFAJBOEHPLJ_o *pJVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_045664ca & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045664ca = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).JIJLBFGKNJK = AGKCKBDAOEI;
  thunk_FUN_01c20e04(&__this->fields,AGKCKBDAOEI);
  (__this->fields).JAICMIMBIOA = KAPOHFHHDEP;
  ppSVar2 = (System_String_o **)&StringLiteral_1/*""*/;
  if (OAOLCGAIILM != (HBNENINHPGF_o *)0x0) {
    ppSVar2 = &(OAOLCGAIILM->fields)._PGCEKJLODEJ_k__BackingField;
  }
  (__this->fields).OPBJKMDPKLG = *ppSVar2;
  thunk_FUN_01c20e04();
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  if (__this_00 != (RaidConfig_o *)0x0) {
    pJVar1 = RaidConfig__BHJOLIJDBLO(__this_00,AGKCKBDAOEI,(MethodInfo *)0x0);
    if (pJVar1 != (RaidConfig_EFAJBOEHPLJ_o *)0x0) {
      ppSVar2 = &(__this->fields).PCAIPKLGAHP;
      *ppSVar2 = (pJVar1->fields).super.PCAIPKLGAHP;
      thunk_FUN_01c20e04(ppSVar2);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

