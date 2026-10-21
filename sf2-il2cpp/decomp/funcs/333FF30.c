// AFFHKININGD$$PINMGKELLJI @ RVA 0x333FF30

float AFFHKININGD__PINMGKELLJI
                (AFFHKININGD_o *__this,PJKHAJKEHEL_o *BCKBBGCOMJD,
                System_Collections_Generic_List_PJKHAJKEHEL__o *DFGLEOANOFI,MethodInfo *method)

{
  int iVar1;
  PJKHAJKEHEL_o *JALKELIHLPC;
  float fVar2;
  
  if ((DAT_0456798d & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<PJKHAJKEHEL>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PJKHAJKEHEL>_get_Item__);
    FUN_01bab630(&StringLiteral_18045);
    DAT_0456798d = 1;
  }
  if (DFGLEOANOFI != (System_Collections_Generic_List_PJKHAJKEHEL__o *)0x0) {
    iVar1 = (DFGLEOANOFI->fields)._size;
    if (0 < iVar1) {
      JALKELIHLPC = (PJKHAJKEHEL_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)DFGLEOANOFI,iVar1 + -1,
                               Method_System_Collections_Generic_List<PJKHAJKEHEL>_get_Item__);
      fVar2 = AFFHKININGD__JGNKKAPMJMB(__this,BCKBBGCOMJD,JALKELIHLPC,method);
      return fVar2;
    }
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_18045,(MethodInfo *)0x0);
    return 0.0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

