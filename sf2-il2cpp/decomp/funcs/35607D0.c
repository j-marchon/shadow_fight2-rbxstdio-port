// Nekki.SF2.Core.Fights.ModelContainer$$LICIHGOBMAI @ RVA 0x35607D0

void Nekki_SF2_Core_Fights_ModelContainer__LICIHGOBMAI
               (Nekki_SF2_Core_Fights_ModelContainer_o *__this,MethodInfo *method)

{
  KHEDNGODOIC_o *pKVar1;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  KHEDNGODOIC_o **ppKVar2;
  
  if ((DAT_04568bd9 & 1) == 0) {
    FUN_01bab630(&KHEDNGODOIC_TypeInfo);
    DAT_04568bd9 = 1;
    method = extraout_x1;
  }
  ppKVar2 = &(__this->fields).ANDGPHHMNMC;
  if (*ppKVar2 != (KHEDNGODOIC_o *)0x0) {
    Util__JODGPLBHHIA(((*ppKVar2)->fields).LDAKOINICNJ,false,(MethodInfo *)0x0);
    *ppKVar2 = (KHEDNGODOIC_o *)0x0;
    thunk_FUN_01c20e04(ppKVar2,0);
    method = extraout_x1_00;
  }
  pKVar1 = (KHEDNGODOIC_o *)thunk_FUN_01bda818(KHEDNGODOIC_TypeInfo,method);
  KHEDNGODOIC___ctor(pKVar1,(MethodInfo *)0x0);
  *ppKVar2 = pKVar1;
  thunk_FUN_01c20e04(ppKVar2,pKVar1);
  if (*ppKVar2 != (KHEDNGODOIC_o *)0x0) {
    KHEDNGODOIC__GIENGNEGHPJ(*ppKVar2,(__this->fields).CNHHLPPHNCO,(MethodInfo *)0x0);
    pKVar1 = (__this->fields).ANDGPHHMNMC;
    if ((pKVar1 != (KHEDNGODOIC_o *)0x0) &&
       (__this_00 = (pKVar1->fields).LDAKOINICNJ, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

