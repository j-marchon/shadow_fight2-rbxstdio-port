// Nekki.SF2.GUI.Dialogs.LotteryDialog$$IKGNIKPBBKK @ RVA 0x32894FC

void Nekki_SF2_GUI_Dialogs_LotteryDialog__IKGNIKPBBKK
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  System_Collections_IEnumerator_o *routine;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  System_Collections_Generic_List_DILGLGMKOFG__o *pSVar1;
  float fVar2;
  
  if ((DAT_045672de & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<DILGLGMKOFG>_get_Count__);
    FUN_01bab630(&StringLiteral_13627);
    DAT_045672de = 1;
    method = extraout_x1;
  }
  pSVar1 = (__this->fields).HPJNLAOAJJE;
  if (pSVar1 != (System_Collections_Generic_List_DILGLGMKOFG__o *)0x0) {
    if ((pSVar1->fields)._size < 10) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_13627,(MethodInfo *)0x0);
      method = extraout_x1_00;
    }
    Nekki_SF2_GUI_Dialogs_LotteryDialog__CIDOGGEGAIN(__this,method);
    fVar2 = MFIKGMIDDIG__IEONOAEPPCN((MethodInfo *)0x0);
    (__this->fields).DEIFFBGHMIH = fVar2;
    MFIKGMIDDIG__ICHPKMALDCH(fVar2 / 3.0,(MethodInfo *)0x0);
    EDFDANKEBGF__MCKLJNFEACN((MethodInfo *)0x0);
    __this_00 = (__this->fields).ScrollShadow;
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
      routine = Nekki_SF2_GUI_Dialogs_LotteryDialog__MOPBBHLMCAJ(__this,method_00);
      UnityEngine_MonoBehaviour__StartCoroutine
                ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
      (__this->fields).OIKLOAGFFGO = 1;
      Nekki_SF2_GUI_Dialogs_LotteryDialog__KNDKMGHNIMK(__this,method_01);
      Nekki_SF2_GUI_Dialogs_LotteryDialog__AINGLMJIPKH(__this,method_02);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

