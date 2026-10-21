// Nekki.SF2.GUI.Map.MapScene$$CJIKOBCFOOF @ RVA 0x35846F0

Nekki_SF2_GUI_Map_RaidMapContainer_o *
Nekki_SF2_GUI_Map_MapScene__CJIKOBCFOOF
          (Nekki_SF2_GUI_Map_MapScene_o *__this,int32_t BFGHCDJJJOO,bool IPJLOGAFNAH,
          MethodInfo *method)

{
  undefined8 *puVar1;
  int iVar2;
  bool bVar3;
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_UIModule_o *BBFEPHOMGDM;
  UnityEngine_Transform_o *pUVar4;
  Nekki_SF2_GUI_Map_MapContainer_o *__this_01;
  MEJIKMPNBNL_o *BHHBEIACGPB;
  Il2CppObject *pIVar5;
  Il2CppObject *pIVar6;
  System_String_o *pSVar7;
  System_Action_OOMHDDBCBJP__o *CJNHFNHJHPE;
  System_Action_o *pSVar8;
  Nekki_SF2_GUI_Map_MapContainer_o *__this_02;
  System_Collections_Generic_List_MEJIKMPNBNL__o *pSVar9;
  Nekki_SF2_GUI_Map_RaidMapContainer_o *exists;
  Il2CppObject *arg0;
  undefined4 local_38;
  int32_t local_34;
  
  local_34 = BFGHCDJJJOO;
  if ((DAT_04568cee & 1) == 0) {
    FUN_01bab630(&System_Action<OOMHDDBCBJP>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<UIModule>__);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MEJIKMPNBNL>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MEJIKMPNBNL>_get_Item__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapScene_EDBJMDJLCKH__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapScene_OnClickBattle__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Map_RaidMapContainer_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_UIModule_TypeInfo);
    FUN_01bab630(&StringLiteral_8834);
    FUN_01bab630(&StringLiteral_12863);
    FUN_01bab630(&StringLiteral_8788);
    FUN_01bab630(&StringLiteral_22435);
    DAT_04568cee = 1;
  }
  pSVar9 = (__this->fields).JFANFALIFFE;
  if (pSVar9 != (System_Collections_Generic_List_MEJIKMPNBNL__o *)0x0) {
    if ((BFGHCDJJJOO < 0) || ((pSVar9->fields)._size <= BFGHCDJJJOO)) {
      pSVar7 = System_Int32__ToString((int32_t)&local_34,(MethodInfo *)0x0);
      pSVar7 = System_String__Concat(StringLiteral_8834,pSVar7,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__LogError((Il2CppObject *)pSVar7,(MethodInfo *)0x0);
      return (Nekki_SF2_GUI_Map_RaidMapContainer_o *)0x0;
    }
    __this_00 = (__this->fields)._raidMapContainerPrefab;
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      BBFEPHOMGDM = (Nekki_SF2_GUI_UIModule_o *)
                    UnityEngine_GameObject__GetComponent<object>
                              (__this_00,Method_UnityEngine_GameObject_GetComponent<UIModule>__);
      pUVar4 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(Nekki_SF2_GUI_UIModule_TypeInfo);
      }
      __this_01 = (Nekki_SF2_GUI_Map_MapContainer_o *)
                  Nekki_SF2_GUI_UIModule__MountModule(BBFEPHOMGDM,pUVar4,true,(MethodInfo *)0x0);
      if ((__this_01 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) &&
         (__this_01->klass !=
          (Nekki_SF2_GUI_Map_MapContainer_c *)Nekki_SF2_GUI_Map_RaidMapContainer_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(__this_01);
      }
      pSVar9 = (__this->fields).JFANFALIFFE;
      if ((pSVar9 != (System_Collections_Generic_List_MEJIKMPNBNL__o *)0x0) &&
         (BHHBEIACGPB = (MEJIKMPNBNL_o *)
                        System_Collections_Generic_List<object>__get_Item
                                  ((System_Collections_Generic_List_object__o *)pSVar9,BFGHCDJJJOO,
                                   Method_System_Collections_Generic_List<MEJIKMPNBNL>_get_Item__),
         __this_01 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0)) {
        Nekki_SF2_GUI_Map_RaidMapContainer__AddRaidZone
                  ((Nekki_SF2_GUI_Map_RaidMapContainer_o *)__this_01,BHHBEIACGPB,(MethodInfo *)0x0);
        pSVar7 = StringLiteral_22435;
        pSVar9 = (__this->fields).JFANFALIFFE;
        puVar1 = &StringLiteral_12863;
        if (!IPJLOGAFNAH) {
          puVar1 = &StringLiteral_8788;
        }
        if (pSVar9 != (System_Collections_Generic_List_MEJIKMPNBNL__o *)0x0) {
          arg0 = (Il2CppObject *)*puVar1;
          pIVar5 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar9,BFGHCDJJJOO,
                              Method_System_Collections_Generic_List<MEJIKMPNBNL>_get_Item__);
          if (pIVar5 != (Il2CppObject *)0x0) {
            local_38 = *(undefined4 *)((long)&pIVar5[2].monitor + 4);
            pIVar5 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_38);
            pSVar9 = (__this->fields).JFANFALIFFE;
            if ((pSVar9 != (System_Collections_Generic_List_MEJIKMPNBNL__o *)0x0) &&
               (pIVar6 = System_Collections_Generic_List<object>__get_Item
                                   ((System_Collections_Generic_List_object__o *)pSVar9,local_34,
                                    Method_System_Collections_Generic_List<MEJIKMPNBNL>_get_Item__),
               pIVar6 != (Il2CppObject *)0x0)) {
              pSVar7 = System_String__Format
                                 (pSVar7,arg0,pIVar5,(Il2CppObject *)pIVar6[2].klass,
                                  (MethodInfo *)0x0);
              Nekki_SF2_GUI_Map_MapContainer__UpdateName(__this_01,pSVar7,(MethodInfo *)0x0);
              CJNHFNHJHPE = (System_Action_OOMHDDBCBJP__o *)
                            thunk_FUN_01bda818(System_Action<OOMHDDBCBJP>_TypeInfo);
              System_Action<object>___ctor();
              Nekki_SF2_GUI_Map_MapContainer__add_OnBattleClicked
                        (__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
              pSVar8 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
              System_Action___ctor();
              Nekki_SF2_GUI_Map_MapContainer__add_OnOpened(__this_01,pSVar8,(MethodInfo *)0x0);
              pSVar8 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
              System_Action___ctor();
              Nekki_SF2_GUI_Map_MapContainer__add_OnClosed(__this_01,pSVar8,(MethodInfo *)0x0);
              pUVar4 = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
              if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                UnityEngine_Transform__SetAsFirstSibling(pUVar4,(MethodInfo *)0x0);
                exists = (__this->fields).OPPIFBJOLBI;
                if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                bVar3 = UnityEngine_Object__op_Implicit
                                  ((UnityEngine_Object_o *)exists,(MethodInfo *)0x0);
                if (bVar3) {
                  iVar2 = (__this->fields).KFKABLNIFDP;
                  if (local_34 < iVar2) {
                    __this_02 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).OPPIFBJOLBI;
                    if (__this_02 == (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) goto LAB_03684ae0;
                  }
                  else {
                    __this_02 = __this_01;
                    if (local_34 <= iVar2) {
                      return (Nekki_SF2_GUI_Map_RaidMapContainer_o *)__this_01;
                    }
                  }
                  pUVar4 = UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
                  if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto LAB_03684ae0;
                  UnityEngine_Transform__SetAsFirstSibling(pUVar4,(MethodInfo *)0x0);
                }
                return (Nekki_SF2_GUI_Map_RaidMapContainer_o *)__this_01;
              }
            }
          }
        }
      }
    }
  }
LAB_03684ae0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

