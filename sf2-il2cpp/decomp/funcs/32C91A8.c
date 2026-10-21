// Nekki.SF2.GUI.Map.LampsPanel$$AddLamps @ RVA 0x32C91A8

void Nekki_SF2_GUI_Map_LampsPanel__AddLamps
               (Nekki_SF2_GUI_Map_LampsPanel_o *__this,int32_t HGHOMHJFAIH,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  SFButton_o *__this_00;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_Transform_o *pUVar4;
  System_Action_object__o *IELDNEAAPBE;
  System_Collections_Generic_List_Button__o *__this_01;
  Nekki_SF2_GUI_ResolutionImage_o *DAHDMONMPFJ;
  System_Collections_Generic_List_ResolutionImage__o *__this_02;
  UnityEngine_UI_Button_array *pUVar5;
  Nekki_SF2_GUI_ResolutionImage_array *pNVar6;
  UnityEngine_GameObject_o *pUVar7;
  int iVar8;
  float fVar9;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  
  if ((DAT_04567508 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<ResolutionImage>__);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<SFButton>__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_LampsPanel_LKNLOCEJOAN__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ResolutionImage>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Button>_Add__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567508 = 1;
  }
  if (0 < HGHOMHJFAIH) {
    iVar8 = 0;
    do {
      pUVar7 = (__this->fields)._lampButtonPrefab;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pUVar7 = (UnityEngine_GameObject_o *)
               UnityEngine_Object__Instantiate<object>
                         ((Il2CppObject *)pUVar7,Method_UnityEngine_Object_Instantiate<GameObject>__
                         );
      if (((pUVar7 == (UnityEngine_GameObject_o *)0x0) ||
          (__this_00 = (SFButton_o *)
                       UnityEngine_GameObject__GetComponent<object>
                                 (pUVar7,Method_UnityEngine_GameObject_GetComponent<SFButton>__),
          __this_00 == (SFButton_o *)0x0)) ||
         (pUVar7 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
         pUVar7 == (UnityEngine_GameObject_o *)0x0)) {
LAB_033c956c:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pUVar3 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
      pUVar7 = (__this->fields)._lampsContainer;
      if ((pUVar7 == (UnityEngine_GameObject_o *)0x0) ||
         (pUVar4 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0),
         pUVar3 == (UnityEngine_Transform_o *)0x0)) goto LAB_033c956c;
      UnityEngine_Transform__SetParent(pUVar3,pUVar4,false,(MethodInfo *)0x0);
      (__this_00->fields).ButtonId = iVar8;
      IELDNEAAPBE = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
      System_Action<object>___ctor();
      SFButton__AddEventListener(__this_00,2,IELDNEAAPBE,(MethodInfo *)0x0);
      pUVar3 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
      if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto LAB_033c956c;
      fVar9 = ((float)HGHOMHJFAIH * 68.0 + (float)(HGHOMHJFAIH + -1) * 22.0) * -0.5 + 0.0 +
              (float)iVar8 * 90.0 + 34.0;
      value.fields.y = -55.0;
      value.fields.x = fVar9;
      value.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition(pUVar3,value,(MethodInfo *)0x0);
      lVar2 = Method_System_Collections_Generic_List<Button>_Add__;
      __this_01 = (__this->fields).NPKEJHGOGOE;
      if (__this_01 == (System_Collections_Generic_List_Button__o *)0x0) goto LAB_033c956c;
      pUVar5 = (__this_01->fields)._items;
      (__this_01->fields)._version = (__this_01->fields)._version + 1;
      if (pUVar5 == (UnityEngine_UI_Button_array *)0x0) goto LAB_033c956c;
      uVar1 = (__this_01->fields)._size;
      if (uVar1 < (uint)pUVar5->max_length) {
        (__this_01->fields)._size = uVar1 + 1;
        pUVar5->m_Items[(int)uVar1] = (UnityEngine_UI_Button_o *)__this_00;
        thunk_FUN_01c20e04(pUVar5->m_Items + (int)uVar1,__this_00);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)__this_00,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      pUVar7 = (UnityEngine_GameObject_o *)
               UnityEngine_Object__Instantiate<object>
                         ((Il2CppObject *)(__this->fields)._lampIndicatorPrefab,
                          Method_UnityEngine_Object_Instantiate<GameObject>__);
      if (((pUVar7 == (UnityEngine_GameObject_o *)0x0) ||
          (DAHDMONMPFJ = (Nekki_SF2_GUI_ResolutionImage_o *)
                         UnityEngine_GameObject__GetComponent<object>
                                   (pUVar7,
                                    Method_UnityEngine_GameObject_GetComponent<ResolutionImage>__),
          DAHDMONMPFJ == (Nekki_SF2_GUI_ResolutionImage_o *)0x0)) ||
         (pUVar7 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)DAHDMONMPFJ,(MethodInfo *)0x0),
         pUVar7 == (UnityEngine_GameObject_o *)0x0)) goto LAB_033c956c;
      pUVar3 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
      pUVar7 = (__this->fields)._indicatorsContainer;
      if ((pUVar7 == (UnityEngine_GameObject_o *)0x0) ||
         (pUVar4 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0),
         pUVar3 == (UnityEngine_Transform_o *)0x0)) goto LAB_033c956c;
      UnityEngine_Transform__SetParent(pUVar3,pUVar4,false,(MethodInfo *)0x0);
      pUVar3 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)DAHDMONMPFJ,(MethodInfo *)0x0);
      if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto LAB_033c956c;
      value_00.fields.y = -55.0;
      value_00.fields.x = fVar9;
      value_00.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition(pUVar3,value_00,(MethodInfo *)0x0);
      LJLLAKHOFFF__IFBBIDIEBEL((UnityEngine_UI_Graphic_o *)DAHDMONMPFJ,0.0,(MethodInfo *)0x0);
      method = (DAHDMONMPFJ->klass->vtable)._25_set_raycastTarget.method;
      (*(DAHDMONMPFJ->klass->vtable)._25_set_raycastTarget.methodPtr)(DAHDMONMPFJ,0);
      lVar2 = Method_System_Collections_Generic_List<ResolutionImage>_Add__;
      __this_02 = (__this->fields).GOAMNFEGHIB;
      if (__this_02 == (System_Collections_Generic_List_ResolutionImage__o *)0x0) goto LAB_033c956c;
      pNVar6 = (__this_02->fields)._items;
      (__this_02->fields)._version = (__this_02->fields)._version + 1;
      if (pNVar6 == (Nekki_SF2_GUI_ResolutionImage_array *)0x0) goto LAB_033c956c;
      uVar1 = (__this_02->fields)._size;
      if (uVar1 < (uint)pNVar6->max_length) {
        (__this_02->fields)._size = uVar1 + 1;
        pNVar6->m_Items[(int)uVar1] = DAHDMONMPFJ;
        thunk_FUN_01c20e04(pNVar6->m_Items + (int)uVar1,DAHDMONMPFJ);
      }
      else {
        method = *(MethodInfo **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70);
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_02,
                   (Il2CppObject *)DAHDMONMPFJ,(MethodInfo_26E4DAC *)method);
      }
      iVar8 = iVar8 + 1;
    } while (HGHOMHJFAIH != iVar8);
  }
  (__this->fields).BJJNEHBCHKE = 0;
  Nekki_SF2_GUI_Map_LampsPanel__OKELAKIIBAO(__this,0,method);
  return;
}

