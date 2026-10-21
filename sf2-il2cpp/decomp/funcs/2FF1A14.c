// HintButton$$JCDGMAEDFIF @ RVA 0x2FF1A14

void HintButton__JCDGMAEDFIF
               (HintButton_o *__this,int32_t BMPJIDHGCBN,System_String_o *LOAHEPDBFAO,
               int32_t CGLFKKMBHCN,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_Collections_Generic_List_MIBHAJBEMIK__o *ILDIDIMINOJ;
  System_Collections_Generic_List_MIBHAJBEMIK__o *LKFALEIFDIO;
  
  if ((DAT_04565a6d & 1) == 0) {
    FUN_01bab630(&GJAEIBMAFGE_TypeInfo);
    DAT_04565a6d = 1;
  }
  iVar1 = (__this->fields)._TrackingDeviceID;
  if ((iVar1 != -1) && (iVar1 == BMPJIDHGCBN)) {
    (__this->fields).OHENCPAHBDH = LOAHEPDBFAO;
    thunk_FUN_01c20e04(&(__this->fields).OHENCPAHBDH,LOAHEPDBFAO);
    (__this->fields).AKOLAICNIJF = CGLFKKMBHCN;
    ILDIDIMINOJ = (__this->fields)._DefaultHintIDs;
    LKFALEIFDIO = (__this->fields).KDGCEFEPJHP;
    if ((GJAEIBMAFGE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    GJAEIBMAFGE__NFLBPOKLKBK(CGLFKKMBHCN,ILDIDIMINOJ,LKFALEIFDIO,(MethodInfo *)0x0);
    bVar2 = HintButton__LMONINNGKAP(__this,method_00);
    if (bVar2) {
      HintButton__NAICHPFNPLE(__this,method_01);
      return;
    }
  }
  return;
}

