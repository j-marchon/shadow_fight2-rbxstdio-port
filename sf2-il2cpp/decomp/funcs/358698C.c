// Nekki.SF2.GUI.Map.MapScene$$HNEBBPHILEA @ RVA 0x358698C

void Nekki_SF2_GUI_Map_MapScene__HNEBBPHILEA
               (Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  int iVar1;
  Nekki_SF2_GUI_Map_MapContainer_o *__this_00;
  System_Collections_Generic_List_MEJIKMPNBNL__o *pSVar2;
  System_Object_array *pSVar3;
  Il2CppObject *pIVar4;
  long lVar5;
  System_Action_MEJIKMPNBNL__o **ppSVar6;
  MEJIKMPNBNL_o *BHHBEIACGPB;
  undefined8 uVar7;
  int index;
  Nekki_SF2_GUI_Map_RaidMapContainer_o *__this_01;
  System_Action_MEJIKMPNBNL__o *action;
  int32_t local_38;
  int32_t local_34;
  
  if ((DAT_04568d19 & 1) == 0) {
    FUN_01bab630(&System_Action<MEJIKMPNBNL>_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MEJIKMPNBNL>_ForEach__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MEJIKMPNBNL>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MEJIKMPNBNL>_get_Item__);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapScene_<>c_EFNKANEGAOF__);
    FUN_01bab630(&Nekki_SF2_GUI_Map_MapScene_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_9501);
    FUN_01bab630(&StringLiteral_3260);
    FUN_01bab630(&StringLiteral_16189);
    DAT_04568d19 = 1;
  }
  __this_00 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).OPPIFBJOLBI;
  if (__this_00 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) {
    Nekki_SF2_GUI_Map_MapContainer__Clear(__this_00,(MethodInfo *)0x0);
    pSVar2 = (__this->fields).JFANFALIFFE;
    if (pSVar2 != (System_Collections_Generic_List_MEJIKMPNBNL__o *)0x0) {
      iVar1 = (pSVar2->fields)._size;
      if (iVar1 == 0) {
        pSVar3 = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
        local_34 = (__this->fields).KFKABLNIFDP;
        pIVar4 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_34);
        if (pSVar3 == (System_Object_array *)0x0) goto LAB_03686cb4;
                    /* try { // try from 03686c54 to 03786c5b has its CatchHandler @ 03686d2c */
        if ((pIVar4 != (Il2CppObject *)0x0) &&
           (lVar5 = thunk_FUN_01bda71c(pIVar4,(((pSVar3->obj).klass)->_1).element_class), lVar5 == 0
           )) {
LAB_03686cbc:
          uVar7 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(uVar7,0);
        }
        if ((int)pSVar3->max_length == 0) {
LAB_03686cb8:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03686cb8 to 03786ccb has its CatchHandler @ 03686d14 */
          FUN_01bab8d0();
        }
        pSVar3->m_Items[0] = pIVar4;
        thunk_FUN_01c20e04(pSVar3->m_Items,pIVar4);
                    /* try { // try from 03686c7c to 03786c8f has its CatchHandler @ 03686d20 */
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogErrorFormat(StringLiteral_9501,pSVar3,(MethodInfo *)0x0);
      }
      else {
        index = (__this->fields).KFKABLNIFDP;
        if ((index < 0) || (iVar1 + -1 < index)) {
          pSVar3 = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
          local_38 = (__this->fields).KFKABLNIFDP;
          pIVar4 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_38);
          if (pSVar3 == (System_Object_array *)0x0) goto LAB_03686cb4;
          if ((pIVar4 != (Il2CppObject *)0x0) &&
             (lVar5 = thunk_FUN_01bda71c(pIVar4,(((pSVar3->obj).klass)->_1).element_class),
             lVar5 == 0)) goto LAB_03686cbc;
          if ((int)pSVar3->max_length == 0) goto LAB_03686cb8;
          pSVar3->m_Items[0] = pIVar4;
          thunk_FUN_01c20e04(pSVar3->m_Items,pIVar4);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogErrorFormat(StringLiteral_16189,pSVar3,(MethodInfo *)0x0);
          UnityEngine_Debug__LogError(StringLiteral_3260,(MethodInfo *)0x0);
          pSVar2 = (__this->fields).JFANFALIFFE;
          if ((Nekki_SF2_GUI_Map_MapScene_<>c_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          action = Nekki_SF2_GUI_Map_MapScene_<>c_TypeInfo->static_fields->__9__53_0;
          if (action == (System_Action_MEJIKMPNBNL__o *)0x0) {
            if ((Nekki_SF2_GUI_Map_MapScene_<>c_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
                    /* try { // try from 03686b64 to 03786c53 has its CatchHandler @ 03686b64
                       catch() { ... } // from try @ 03686b64 with catch @ 03686b64
                       catch() { ... } // from try @ 03686cdc with catch @ 03686b64
                       catch() { ... } // from try @ 03686d0c with catch @ 03686b64
                       catch() { ... } // from try @ 03686d14 with catch @ 03686b64
                       catch() { ... } // from try @ 03686d48 with catch @ 03686b64
                       catch() { ... } // from try @ 03686d78 with catch @ 03686b64 */
            action = (System_Action_MEJIKMPNBNL__o *)
                     thunk_FUN_01bda818(System_Action<MEJIKMPNBNL>_TypeInfo);
            System_Action<object>___ctor();
            ppSVar6 = &Nekki_SF2_GUI_Map_MapScene_<>c_TypeInfo->static_fields->__9__53_0;
            *ppSVar6 = action;
            thunk_FUN_01c20e04(ppSVar6,action);
          }
          if (pSVar2 == (System_Collections_Generic_List_MEJIKMPNBNL__o *)0x0) goto LAB_03686cb4;
          System_Collections_Generic_List<object>__ForEach
                    ((System_Collections_Generic_List_object__o *)pSVar2,
                     (System_Action_T__o *)action,
                     Method_System_Collections_Generic_List<MEJIKMPNBNL>_ForEach__);
          pSVar2 = (__this->fields).JFANFALIFFE;
          (__this->fields).KFKABLNIFDP = 0;
          if (pSVar2 == (System_Collections_Generic_List_MEJIKMPNBNL__o *)0x0) goto LAB_03686cb4;
          index = 0;
        }
        __this_01 = (__this->fields).OPPIFBJOLBI;
        BHHBEIACGPB = (MEJIKMPNBNL_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)pSVar2,index,
                                 Method_System_Collections_Generic_List<MEJIKMPNBNL>_get_Item__);
        if (__this_01 == (Nekki_SF2_GUI_Map_RaidMapContainer_o *)0x0) goto LAB_03686cb4;
        Nekki_SF2_GUI_Map_RaidMapContainer__AddRaidZone(__this_01,BHHBEIACGPB,(MethodInfo *)0x0);
      }
      return;
    }
  }
LAB_03686cb4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

