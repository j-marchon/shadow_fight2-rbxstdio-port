// HintButton$$BEBGOPNMHON @ RVA 0x2FF10B8

void HintButton__BEBGOPNMHON
               (HintButton_o *__this,int32_t NAIJBCMHBFK,int32_t OPHMGAKOJLP,int32_t AAJGEHHPMGH,
               MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  System_Collections_Generic_List_T__o *__this_00;
  MethodInfo *method_00;
  
  if ((DAT_04565a6a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<FBBNEILNOKK>_Contains__,NAIJBCMHBFK);
    DAT_04565a6a = 1;
  }
  if ((__this->fields).super.super.super.m_Interactable != false) {
    __this_00 = (System_Collections_Generic_List_T__o *)(__this->fields).EKJNLACDGKC;
    if (__this_00 == (System_Collections_Generic_List_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar2 = System_Collections_Generic_List<Int32Enum>__Contains
                      (__this_00,AAJGEHHPMGH,
                       Method_System_Collections_Generic_List<FBBNEILNOKK>_Contains__);
    if ((((bVar2) &&
         (bVar2 = AKJJAPEHKCG__MNKFDLHJPAA((UnityEngine_UI_Selectable_o *)__this,(MethodInfo *)0x0),
         !bVar2)) &&
        ((iVar1 = (__this->fields)._TrackingDeviceID, iVar1 == -1 || (iVar1 == OPHMGAKOJLP)))) &&
       (((__this->fields).BBDACLMINDN == false &&
        (bVar2 = HintButton__get_IsHintsPressed(__this,method_00), bVar2)))) {
      (__this->fields).BBDACLMINDN = true;
      SFButton__SetStatePressed((SFButton_o *)__this,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}

