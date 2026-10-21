// Nekki.SF2.GUI.Fight.ScreenFight$$DKNNDNIGMIM @ RVA 0x30A7D80

void Nekki_SF2_GUI_Fight_ScreenFight__DKNNDNIGMIM
               (Nekki_SF2_GUI_Fight_ScreenFight_o *__this,MethodInfo *method)

{
  long lVar1;
  int iVar2;
  bool bVar3;
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_Fight_VsScreen_o *pNVar4;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  System_Collections_Generic_List_PJKHAJKEHEL__o *__this_02;
  Il2CppObject *pIVar5;
  uint index;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *extraout_x1_00;
  Nekki_SF2_GUI_Fight_ScreenFight_DMDCILOEFAN_o *pNVar6;
  UnityEngine_Object_o *x;
  Nekki_SF2_GUI_Fight_VsScreen_o **ppNVar7;
  float PEIDCPCKOJA;
  
  if ((DAT_04566186 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<VsScreen>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PJKHAJKEHEL>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PJKHAJKEHEL>_get_Item__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566186 = 1;
    method = extraout_x1;
  }
  (__this->fields).Type = 1;
  lVar1 = 0x50;
  if ((__this->fields).PCLDELEFHBP != false) {
    lVar1 = 0x58;
  }
  x = *(UnityEngine_Object_o **)((long)&__this->klass + lVar1);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar3 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  method_01 = method_00;
  PEIDCPCKOJA = 0.0;
  if (!bVar3) {
    Nekki_SF2_GUI_Fight_ScreenFight__ClearPictures(__this,method_00);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = (UnityEngine_GameObject_o *)
                UnityEngine_Object__Instantiate<object>
                          ((Il2CppObject *)x,Method_UnityEngine_Object_Instantiate<GameObject>__);
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      pNVar4 = (Nekki_SF2_GUI_Fight_VsScreen_o *)
               UnityEngine_GameObject__GetComponent<object>
                         (__this_00,Method_UnityEngine_GameObject_GetComponent<VsScreen>__);
      ppNVar7 = &(__this->fields).LJDENNBMCIG;
      *ppNVar7 = pNVar4;
      thunk_FUN_01c20e04(ppNVar7,pNVar4);
      if (*ppNVar7 != (Nekki_SF2_GUI_Fight_VsScreen_o *)0x0) {
        __this_01 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)*ppNVar7,(MethodInfo *)0x0);
        parent = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (__this_01 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetParent(__this_01,parent,false,(MethodInfo *)0x0);
          pNVar6 = (__this->fields).MPMMEGJACCD;
                    /* try { // try from 031a7ec4 to 032a80c7 has its CatchHandler @ 031a7ec4
                       catch() { ... } // from try @ 031a7ec4 with catch @ 031a7ec4
                       catch() { ... } // from try @ 031a81b4 with catch @ 031a7ec4
                       catch() { ... } // from try @ 031a81fc with catch @ 031a7ec4
                       catch() { ... } // from try @ 031a8390 with catch @ 031a7ec4
                       catch() { ... } // from try @ 031a83e0 with catch @ 031a7ec4 */
          if ((pNVar6 != (Nekki_SF2_GUI_Fight_ScreenFight_DMDCILOEFAN_o *)0x0) &&
             (__this_02 = (pNVar6->fields).LFMGOAKIOPC,
             __this_02 != (System_Collections_Generic_List_PJKHAJKEHEL__o *)0x0)) {
            iVar2 = (__this_02->fields)._size;
            index = (pNVar6->fields).OJNKIAFGCBL;
            method_01 = (MethodInfo *)(ulong)index;
            if (iVar2 <= (int)index) {
              PEIDCPCKOJA = 0.0;
              if (iVar2 < 1) goto LAB_031a7f2c;
              index = 0;
            }
            pIVar5 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)__this_02,index,
                                Method_System_Collections_Generic_List<PJKHAJKEHEL>_get_Item__);
            pNVar6 = (__this->fields).MPMMEGJACCD;
            if ((pNVar6 != (Nekki_SF2_GUI_Fight_ScreenFight_DMDCILOEFAN_o *)0x0) &&
               (pNVar4 = (__this->fields).LJDENNBMCIG,
               pNVar4 != (Nekki_SF2_GUI_Fight_VsScreen_o *)0x0)) {
              (*(pNVar4->klass->vtable)._5_Init.methodPtr)
                        (pNVar4,(pNVar6->fields).FAPMJJBOFEF,pIVar5,
                         (ulong)(__this->fields).PCLDELEFHBP,(pNVar4->klass->vtable)._5_Init.method)
              ;
              pNVar4 = (__this->fields).LJDENNBMCIG;
              if (pNVar4 != (Nekki_SF2_GUI_Fight_VsScreen_o *)0x0) {
                PEIDCPCKOJA = (pNVar4->fields).ACFFOAPPNBD;
                method_01 = extraout_x1_00;
                goto LAB_031a7f2c;
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_031a7f2c:
  Nekki_SF2_GUI_Fight_ScreenFight__BMMLKHIHOEE(__this,PEIDCPCKOJA,method_01);
  return;
}

