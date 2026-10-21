// NCNJEIBHGBH$$JFIJFIEOGIC @ RVA 0x32F14F4

Nekki_SF2_GUI_Map_MapButton_o *
NCNJEIBHGBH__JFIJFIEOGIC
          (NCNJEIBHGBH_o *__this,UnityEngine_GameObject_o *IHFPOLHPMGF,FKNCNNOOOIO_o *BMINOMGENHE,
          bool KJCOGEKPFIB,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *__this_00;
  Il2CppClass *pIVar3;
  System_Collections_Generic_List_string__o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  Nekki_SF2_GUI_Map_MapButton_o *__this_03;
  LIDDCJFOOOI_o *__this_04;
  UnityEngine_Events_UnityAction_o *call;
  System_String_o *pSVar4;
  undefined4 uVar5;
  System_String_array *pSVar6;
  UnityEngine_Events_UnityEvent_o *__this_05;
  Il2CppObject *pIVar7;
  Il2CppType *pIVar8;
  
  if ((DAT_04567673 & 1) == 0) {
    FUN_01bab630(&FKNCNNOOOIO_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<MapButton>__);
    FUN_01bab630(&Method_NCNJEIBHGBH_HMOEKKDONEJ_MBKKOHBPJLG__);
    FUN_01bab630(&Method_NCNJEIBHGBH_HMOEKKDONEJ_PPKOFLOMCOO__);
    FUN_01bab630(&NCNJEIBHGBH_HMOEKKDONEJ_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_12931);
    FUN_01bab630(&StringLiteral_1492);
    DAT_04567673 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(NCNJEIBHGBH_HMOEKKDONEJ_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)__this;
    thunk_FUN_01c20e04(__this_00 + 1,__this);
    pIVar3 = (Il2CppClass *)thunk_FUN_01bda818(FKNCNNOOOIO_TypeInfo);
    FKNCNNOOOIO___ctor((FKNCNNOOOIO_o *)pIVar3,BMINOMGENHE,(MethodInfo *)0x0);
    pIVar7 = __this_00 + 2;
    pIVar7->klass = pIVar3;
    thunk_FUN_01c20e04(pIVar7,pIVar3);
    pIVar3 = pIVar7->klass;
    *(undefined4 *)&__this_00[1].monitor = 0;
    if (pIVar3 != (Il2CppClass *)0x0) {
      if (*(char *)&(pIVar3->_1).typeMetadataHandle == '\0') {
        __this_01 = (__this->fields).DMLKGAKPCAB;
      }
      else {
        __this_01 = (__this->fields).PAFEHLCLKEC;
      }
      if (__this_01 != (System_Collections_Generic_List_string__o *)0x0) {
        uVar1 = (__this_01->fields)._size;
        *(uint *)&__this_00[1].monitor = uVar1;
        lVar2 = Method_System_Collections_Generic_List<string>_Add__;
        pSVar4 = (System_String_o *)(pIVar3->_1).name;
        pSVar6 = (__this_01->fields)._items;
        (__this_01->fields)._version = (__this_01->fields)._version + 1;
        if (pSVar6 != (System_String_array *)0x0) {
          if (uVar1 < (uint)pSVar6->max_length) {
            (__this_01->fields)._size = uVar1 + 1;
            pSVar6->m_Items[(int)uVar1] = pSVar4;
            thunk_FUN_01c20e04(pSVar6->m_Items + (int)uVar1);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)pSVar4
                       ,*(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
          pIVar3 = pIVar7->klass;
          if (pIVar3 != (Il2CppClass *)0x0) {
            if ((pIVar3->_1).this_arg.bits == 1) {
              pIVar8 = &(pIVar3->_1).this_arg;
              pSVar4 = System_String__Concat
                                 (StringLiteral_12931,pIVar8->data,StringLiteral_1492,
                                  (MethodInfo *)0x0);
              pIVar8->data = pSVar4;
              thunk_FUN_01c20e04(pIVar8,pSVar4);
              pIVar3 = pIVar7->klass;
              if (pIVar3 == (Il2CppClass *)0x0) goto LAB_033f1810;
            }
            uVar5 = 1;
            if (!KJCOGEKPFIB) {
              uVar5 = 2;
            }
            *(undefined4 *)((long)&(pIVar3->_1).interopData + 4) = uVar5;
            if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            __this_02 = (UnityEngine_GameObject_o *)
                        UnityEngine_Object__Instantiate<object>
                                  ((Il2CppObject *)IHFPOLHPMGF,
                                   Method_UnityEngine_Object_Instantiate<GameObject>__);
                    /* try { // try from 033f1738 to 034f175f has its CatchHandler @ 033f1f9c */
            if ((__this_02 != (UnityEngine_GameObject_o *)0x0) &&
               (__this_03 = (Nekki_SF2_GUI_Map_MapButton_o *)
                            UnityEngine_GameObject__GetComponent<object>
                                      (__this_02,
                                       Method_UnityEngine_GameObject_GetComponent<MapButton>__),
               __this_03 != (Nekki_SF2_GUI_Map_MapButton_o *)0x0)) {
              Nekki_SF2_GUI_Map_MapButton__set_MapButtonInfo
                        (__this_03,(FKNCNNOOOIO_o *)pIVar7->klass,(MethodInfo *)0x0);
              if (pIVar7->klass != (Il2CppClass *)0x0) {
                if (*(char *)&(pIVar7->klass->_1).typeMetadataHandle != '\0') {
                  if (KJCOGEKPFIB) {
                    __this_04 = (__this->fields).GNMGOPAABKE;
                  }
                  else {
                    __this_04 = (__this->fields).PFBKEFOBEDB;
                  }
                  if (__this_04 == (LIDDCJFOOOI_o *)0x0) goto LAB_033f1810;
                  LIDDCJFOOOI__GFECOLFOILC(__this_04,__this_03,true,(MethodInfo *)0x0);
                }
                    /* try { // try from 033f1794 to 034f17bf has its CatchHandler @ 033f1f98 */
                if (pIVar7->klass != (Il2CppClass *)0x0) {
                  __this_05 = (UnityEngine_Events_UnityEvent_o *)(__this_03->fields).super.m_OnClick
                  ;
                  call = (UnityEngine_Events_UnityAction_o *)
                         thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                  UnityEngine_Events_UnityAction___ctor();
                  if (__this_05 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                    UnityEngine_Events_UnityEvent__AddListener(__this_05,call,(MethodInfo *)0x0);
                    /* try { // try from 033f1800 to 034f1807 has its CatchHandler @ 033f1f80 */
                    return __this_03;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_033f1810:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 033f1810 to 034f1817 has its CatchHandler @ 033f1f6c */
  FUN_01bab8c8();
}

