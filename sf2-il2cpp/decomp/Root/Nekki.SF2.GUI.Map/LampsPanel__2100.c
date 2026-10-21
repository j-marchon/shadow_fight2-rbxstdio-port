// TypeDefIndex 2100
// Namespace: Nekki.SF2.GUI.Map
// public class LampsPanel : MonoBehaviour
// Fields:
//   public const float LAMP_PADDING_BOT = -55;
//   public const float LAMP_DISTANCE = 22;
//   public const float LAMP_WIDTH = 68;
//   private Action<int> BAIENFNFLAI; // 0x20
//   private List<Button> NPKEJHGOGOE; // 0x28
//   private List<ResolutionImage> GOAMNFEGHIB; // 0x30
//   private List<Button> FGFAMIEFDEO; // 0x38
//   private List<ResolutionImage> GENBELDCMGN; // 0x40
//   private ResolutionImage _lampOn; // 0x48
//   private int BJJNEHBCHKE; // 0x50
//   private int GJNBBEBNALP; // 0x54
//   private int NFBFPDJLJBG; // 0x58
//   private int FAOGPCBDLCE; // 0x5C
//   private bool AJJDFCMECEO; // 0x60
//   private bool CHEKKHNGMMP; // 0x61
//   private bool MIIHHLIFPJM; // 0x62
//   private bool ABNHKOFADPD; // 0x63
//   private LabelAlias _locationName; // 0x68
//   private GameObject _lampButtonPrefab; // 0x70
//   private GameObject _lampIndicatorPrefab; // 0x78
//   private GameObject _lampsContainer; // 0x80
//   private GameObject _indicatorsContainer; // 0x88

// ===== public void .ctor()  [RVA 0x32C8D00]
// Nekki.SF2.GUI.Map.LampsPanel$$.ctor @ RVA 0x32C8D00

void Nekki_SF2_GUI_Map_LampsPanel___ctor(Nekki_SF2_GUI_Map_LampsPanel_o *__this,MethodInfo *method)

{
  System_Action_int__o **ppSVar1;
  System_Collections_Generic_List_Button__o *pSVar2;
  System_Collections_Generic_List_Button__o **ppSVar3;
  System_Collections_Generic_List_ResolutionImage__o *pSVar4;
  System_Collections_Generic_List_ResolutionImage__o **ppSVar5;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Action_int__o *pSVar6;
  
  if ((DAT_04567506 & 1) == 0) {
    FUN_01bab630(&System_Action<int>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ResolutionImage>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Button>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ResolutionImage>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<Button>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_LampsPanel_<>c_NLBKDJDOELO__);
    FUN_01bab630(&Nekki_SF2_GUI_Map_LampsPanel_<>c_TypeInfo);
    DAT_04567506 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_Map_LampsPanel_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Map_LampsPanel_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar6 = Nekki_SF2_GUI_Map_LampsPanel_<>c_TypeInfo->static_fields->__9__38_0;
  if (pSVar6 == (System_Action_int__o *)0x0) {
    if ((Nekki_SF2_GUI_Map_LampsPanel_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_Map_LampsPanel_<>c_TypeInfo,method);
    }
    pSVar6 = (System_Action_int__o *)thunk_FUN_01bda818(System_Action<int>_TypeInfo);
    System_Action<int>___ctor();
    ppSVar1 = &Nekki_SF2_GUI_Map_LampsPanel_<>c_TypeInfo->static_fields->__9__38_0;
    *ppSVar1 = pSVar6;
    thunk_FUN_01c20e04(ppSVar1,pSVar6);
  }
  if (__this != (Nekki_SF2_GUI_Map_LampsPanel_o *)0x0) {
    ppSVar1 = &(__this->fields).BAIENFNFLAI;
    *ppSVar1 = pSVar6;
    thunk_FUN_01c20e04(ppSVar1,pSVar6);
    pSVar2 = (System_Collections_Generic_List_Button__o *)
             thunk_FUN_01bda818(System_Collections_Generic_List<Button>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)pSVar2,
               Method_System_Collections_Generic_List<Button>__ctor__);
    ppSVar3 = &(__this->fields).NPKEJHGOGOE;
    *ppSVar3 = pSVar2;
    thunk_FUN_01c20e04(ppSVar3,pSVar2);
    pSVar4 = (System_Collections_Generic_List_ResolutionImage__o *)
             thunk_FUN_01bda818(System_Collections_Generic_List<ResolutionImage>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)pSVar4,
               Method_System_Collections_Generic_List<ResolutionImage>__ctor__);
    ppSVar5 = &(__this->fields).GOAMNFEGHIB;
    *ppSVar5 = pSVar4;
    thunk_FUN_01c20e04(ppSVar5,pSVar4);
    pSVar2 = (System_Collections_Generic_List_Button__o *)
             thunk_FUN_01bda818(System_Collections_Generic_List<Button>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)pSVar2,
               Method_System_Collections_Generic_List<Button>__ctor__);
    ppSVar3 = &(__this->fields).FGFAMIEFDEO;
    *ppSVar3 = pSVar2;
    thunk_FUN_01c20e04(ppSVar3,pSVar2);
    pSVar4 = (System_Collections_Generic_List_ResolutionImage__o *)
             thunk_FUN_01bda818(System_Collections_Generic_List<ResolutionImage>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)pSVar4,
               Method_System_Collections_Generic_List<ResolutionImage>__ctor__);
    ppSVar5 = &(__this->fields).GENBELDCMGN;
    *ppSVar5 = pSVar4;
    thunk_FUN_01c20e04(ppSVar5,pSVar4);
    (__this->fields).GJNBBEBNALP = 0xff;
    (__this->fields).CHEKKHNGMMP = true;
    (__this->fields).MIIHHLIFPJM = true;
    UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void CheckOpenZones(List<ZoneScrollItem> HLJMHAHBDBA)  [RVA 0x32C8EF0]
// Nekki.SF2.GUI.Map.LampsPanel$$CheckOpenZones @ RVA 0x32C8EF0

void Nekki_SF2_GUI_Map_LampsPanel__CheckOpenZones
               (Nekki_SF2_GUI_Map_LampsPanel_o *__this,
               System_Collections_Generic_List_ZoneScrollItem__o *HLJMHAHBDBA,MethodInfo *method)

{
  int32_t iVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  Il2CppObject *pIVar5;
  UnityEngine_UI_Button_o *item;
  Nekki_SF2_GUI_ResolutionImage_o *item_00;
  System_Collections_Generic_List_Button__o *pSVar6;
  System_Collections_Generic_List_ResolutionImage__o *pSVar7;
  UnityEngine_UI_Button_array *pUVar8;
  Nekki_SF2_GUI_ResolutionImage_array *pNVar9;
  int index;
  Il2CppClass *BHHBEIACGPB;
  System_Collections_Generic_List_Button__o *__this_00;
  System_Collections_Generic_List_ResolutionImage__o *__this_01;
  
  if ((DAT_04567507 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ResolutionImage>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Button>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ResolutionImage>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Button>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ZoneScrollItem>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Button>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ResolutionImage>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ZoneScrollItem>_get_Item__);
    FUN_01bab630(&Nekki_SF2_GUI_Map_MapScene_TypeInfo);
    DAT_04567507 = 1;
  }
  pSVar6 = (__this->fields).FGFAMIEFDEO;
  if (pSVar6 != (System_Collections_Generic_List_Button__o *)0x0) {
    iVar1 = (pSVar6->fields)._size;
    (pSVar6->fields)._size = 0;
    (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
    if (0 < iVar1) {
      System_Array__Clear((System_Array_o *)(pSVar6->fields)._items,0,iVar1,(MethodInfo *)0x0);
    }
    pSVar7 = (__this->fields).GENBELDCMGN;
    if (pSVar7 != (System_Collections_Generic_List_ResolutionImage__o *)0x0) {
      iVar1 = (pSVar7->fields)._size;
      (pSVar7->fields)._size = 0;
      (pSVar7->fields)._version = (pSVar7->fields)._version + 1;
      if (0 < iVar1) {
        System_Array__Clear((System_Array_o *)(pSVar7->fields)._items,0,iVar1,(MethodInfo *)0x0);
      }
      if (HLJMHAHBDBA != (System_Collections_Generic_List_ZoneScrollItem__o *)0x0) {
        if (0 < (HLJMHAHBDBA->fields)._size) {
          index = 0;
          do {
            pIVar5 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)HLJMHAHBDBA,index,
                                Method_System_Collections_Generic_List<ZoneScrollItem>_get_Item__);
            if ((pIVar5 == (Il2CppObject *)0x0) ||
               (BHHBEIACGPB = pIVar5[0x14].klass, BHHBEIACGPB == (Il2CppClass *)0x0))
            goto LAB_033c91a4;
            if (*(char *)&(BHHBEIACGPB->_1).name == '\0') {
              if ((Nekki_SF2_GUI_Map_MapScene_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              bVar4 = Nekki_SF2_GUI_Map_MapScene__IsZoneOpen
                                ((MEJIKMPNBNL_o *)BHHBEIACGPB,(MethodInfo *)0x0);
              if (!bVar4) {
                return;
              }
              if ((Nekki_SF2_GUI_Map_MapScene_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              bVar4 = Nekki_SF2_GUI_Map_MapScene__IsZoneHaveDontCompleteBattle
                                ((MEJIKMPNBNL_o *)BHHBEIACGPB,(MethodInfo *)0x0);
              if (bVar4) {
                pSVar6 = (__this->fields).NPKEJHGOGOE;
                if (pSVar6 == (System_Collections_Generic_List_Button__o *)0x0) goto LAB_033c91a4;
                __this_00 = (__this->fields).FGFAMIEFDEO;
                item = (UnityEngine_UI_Button_o *)
                       System_Collections_Generic_List<object>__get_Item
                                 ((System_Collections_Generic_List_object__o *)pSVar6,index,
                                  Method_System_Collections_Generic_List<Button>_get_Item__);
                lVar3 = Method_System_Collections_Generic_List<Button>_Add__;
                if (__this_00 == (System_Collections_Generic_List_Button__o *)0x0)
                goto LAB_033c91a4;
                pUVar8 = (__this_00->fields)._items;
                (__this_00->fields)._version = (__this_00->fields)._version + 1;
                if (pUVar8 == (UnityEngine_UI_Button_array *)0x0) goto LAB_033c91a4;
                uVar2 = (__this_00->fields)._size;
                if (uVar2 < (uint)pUVar8->max_length) {
                  (__this_00->fields)._size = uVar2 + 1;
                  pUVar8->m_Items[(int)uVar2] = item;
                  thunk_FUN_01c20e04();
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)__this_00,
                             (Il2CppObject *)item,
                             *(MethodInfo_26E4DAC **)
                              (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
                }
                pSVar7 = (__this->fields).GOAMNFEGHIB;
                if (pSVar7 == (System_Collections_Generic_List_ResolutionImage__o *)0x0)
                goto LAB_033c91a4;
                __this_01 = (__this->fields).GENBELDCMGN;
                item_00 = (Nekki_SF2_GUI_ResolutionImage_o *)
                          System_Collections_Generic_List<object>__get_Item
                                    ((System_Collections_Generic_List_object__o *)pSVar7,index,
                                     Method_System_Collections_Generic_List<ResolutionImage>_get_Item__
                                    );
                lVar3 = Method_System_Collections_Generic_List<ResolutionImage>_Add__;
                if (__this_01 == (System_Collections_Generic_List_ResolutionImage__o *)0x0)
                goto LAB_033c91a4;
                pNVar9 = (__this_01->fields)._items;
                (__this_01->fields)._version = (__this_01->fields)._version + 1;
                if (pNVar9 == (Nekki_SF2_GUI_ResolutionImage_array *)0x0) goto LAB_033c91a4;
                uVar2 = (__this_01->fields)._size;
                if (uVar2 < (uint)pNVar9->max_length) {
                  (__this_01->fields)._size = uVar2 + 1;
                  pNVar9->m_Items[(int)uVar2] = item_00;
                  thunk_FUN_01c20e04();
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)__this_01,
                             (Il2CppObject *)item_00,
                             *(MethodInfo_26E4DAC **)
                              (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
                }
              }
            }
            index = index + 1;
          } while (index < (HLJMHAHBDBA->fields)._size);
        }
        return;
      }
    }
  }
LAB_033c91a4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void AddLamps(int HGHOMHJFAIH)  [RVA 0x32C91A8]
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


// ===== private void AGHFDDGCCJN(List<ResolutionImage> BKDABHMAPDK)  [RVA 0x32C9634]
// Nekki.SF2.GUI.Map.LampsPanel$$AGHFDDGCCJN @ RVA 0x32C9634

void Nekki_SF2_GUI_Map_LampsPanel__AGHFDDGCCJN
               (Nekki_SF2_GUI_Map_LampsPanel_o *__this,
               System_Collections_Generic_List_ResolutionImage__o *BKDABHMAPDK,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  MOAHCJAFGNJ_c *pMVar3;
  UnityEngine_Component_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_UI_Graphic_o *DAHDMONMPFJ;
  MOAHCJAFGNJ_NEEADEALBAI_o *pMVar4;
  int iVar5;
  
  if ((DAT_04567509 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ResolutionImage>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ResolutionImage>_get_Item__);
    FUN_01bab630(&MOAHCJAFGNJ_TypeInfo);
    DAT_04567509 = 1;
  }
  if ((MOAHCJAFGNJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pMVar3 = MOAHCJAFGNJ_TypeInfo;
  pMVar4 = MOAHCJAFGNJ_TypeInfo->static_fields->HLGBDNJJIMH;
  if (pMVar4 != (MOAHCJAFGNJ_NEEADEALBAI_o *)0x0) {
    uVar1 = (pMVar4->fields).NJAMIACMNCG;
    if (0 < (int)uVar1) {
      iVar5 = (__this->fields).NFBFPDJLJBG;
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = 0xff / uVar1;
      }
      if ((__this->fields).CHEKKHNGMMP == false) {
        iVar5 = iVar5 + uVar2;
        (__this->fields).NFBFPDJLJBG = iVar5;
        if (0xfe < iVar5) {
          (__this->fields).NFBFPDJLJBG = 0xff;
          (__this->fields).CHEKKHNGMMP = true;
          if ((pMVar3->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
            pMVar4 = MOAHCJAFGNJ_TypeInfo->static_fields->HLGBDNJJIMH;
            if (pMVar4 == (MOAHCJAFGNJ_NEEADEALBAI_o *)0x0) goto LAB_033c97bc;
          }
          (__this->fields).FAOGPCBDLCE = (pMVar4->fields).LDKIEDOLMPM;
        }
      }
      else {
        iVar5 = iVar5 - uVar2;
        (__this->fields).NFBFPDJLJBG = iVar5;
        if (iVar5 < 1) {
          (__this->fields).NFBFPDJLJBG = 0;
          (__this->fields).CHEKKHNGMMP = false;
        }
      }
      if (BKDABHMAPDK == (System_Collections_Generic_List_ResolutionImage__o *)0x0)
      goto LAB_033c97bc;
      if (0 < (BKDABHMAPDK->fields)._size) {
        iVar5 = 0;
        do {
          __this_00 = (UnityEngine_Component_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)BKDABHMAPDK,iVar5,
                                 Method_System_Collections_Generic_List<ResolutionImage>_get_Item__)
          ;
          if ((__this_00 == (UnityEngine_Component_o *)0x0) ||
             (__this_01 = UnityEngine_Component__get_gameObject(__this_00,(MethodInfo *)0x0),
             __this_01 == (UnityEngine_GameObject_o *)0x0)) goto LAB_033c97bc;
          UnityEngine_GameObject__SetActive(__this_01,true,(MethodInfo *)0x0);
          DAHDMONMPFJ = (UnityEngine_UI_Graphic_o *)
                        System_Collections_Generic_List<object>__get_Item
                                  ((System_Collections_Generic_List_object__o *)BKDABHMAPDK,iVar5,
                                   Method_System_Collections_Generic_List<ResolutionImage>_get_Item__
                                  );
          LJLLAKHOFFF__IFBBIDIEBEL
                    (DAHDMONMPFJ,(float)(__this->fields).NFBFPDJLJBG / 255.0,(MethodInfo *)0x0);
          iVar5 = iVar5 + 1;
        } while (iVar5 < (BKDABHMAPDK->fields)._size);
      }
    }
    return;
  }
LAB_033c97bc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SetCurrentZone(int DPJIDNBJIBG, string DHMHOAAOHEK)  [RVA 0x32C97C0]
// Nekki.SF2.GUI.Map.LampsPanel$$SetCurrentZone @ RVA 0x32C97C0

void Nekki_SF2_GUI_Map_LampsPanel__SetCurrentZone
               (Nekki_SF2_GUI_Map_LampsPanel_o *__this,int32_t DPJIDNBJIBG,
               System_String_o *DHMHOAAOHEK,MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  MethodInfo *method_00;
  
  __this_00 = (__this->fields)._locationName;
  if (__this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    Nekki_SF2_GUI_LabelAlias__set_Alias(__this_00,DHMHOAAOHEK,(MethodInfo *)0x0);
    (__this->fields).BJJNEHBCHKE = DPJIDNBJIBG;
    Nekki_SF2_GUI_Map_LampsPanel__OKELAKIIBAO(__this,DPJIDNBJIBG,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ClearLamps()  [RVA 0x32C9800]
// Nekki.SF2.GUI.Map.LampsPanel$$ClearLamps @ RVA 0x32C9800

void Nekki_SF2_GUI_Map_LampsPanel__ClearLamps
               (Nekki_SF2_GUI_Map_LampsPanel_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  bool bVar2;
  System_Collections_Generic_List_Button__o *pSVar3;
  UnityEngine_GameObject_o *pUVar4;
  System_Collections_Generic_List_ResolutionImage__o *pSVar5;
  System_Collections_Generic_List_Enumerator_T__o local_90;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_0456750a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Button>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ResolutionImage>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ResolutionImage>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Button>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ResolutionImage>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Button>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ResolutionImage>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Button>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ResolutionImage>_GetEnumerator__);
                    /* try { // try from 033c9890 to 034c9953 has its CatchHandler @ 033c9890
                       catch() { ... } // from try @ 033c9890 with catch @ 033c9890
                       catch() { ... } // from try @ 033c99dc with catch @ 033c9890
                       catch() { ... } // from try @ 033c9a1c with catch @ 033c9890
                       catch() { ... } // from try @ 033c9a48 with catch @ 033c9890
                       catch() { ... } // from try @ 033c9a54 with catch @ 033c9890
                       catch() { ... } // from try @ 033c9a7c with catch @ 033c9890
                       catch() { ... } // from try @ 033c9abc with catch @ 033c9890 */
    FUN_01bab630(&Method_System_Collections_Generic_List<Button>_GetEnumerator__);
    DAT_0456750a = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  local_78.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_78.fields._index = 0;
  local_78.fields._version = 0;
  local_78.fields._current = (Il2CppObject *)0x0;
  pSVar3 = (__this->fields).NPKEJHGOGOE;
  if (pSVar3 != (System_Collections_Generic_List_Button__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_90,(System_Collections_Generic_List_object__o *)pSVar3,
               Method_System_Collections_Generic_List<Button>_GetEnumerator__);
    local_60.fields._index = local_90.fields._index;
    local_60.fields._version = local_90.fields._version;
    local_60.fields._list = local_90.fields._list;
    local_60.fields._current = local_90.fields._current;
    while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_60,
                              Method_System_Collections_Generic_List_Enumerator<Button>_MoveNext__),
          bVar2) {
      if ((UnityEngine_Component_o *)local_60.fields._current == (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pUVar4 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)local_60.fields._current,(MethodInfo *)0x0);
      Util__JODGPLBHHIA(pUVar4,false,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_60,Method_System_Collections_Generic_List_Enumerator<Button>_Dispose__);
    pSVar3 = (__this->fields).NPKEJHGOGOE;
    if (pSVar3 != (System_Collections_Generic_List_Button__o *)0x0) {
      iVar1 = (pSVar3->fields)._size;
                    /* try { // try from 033c9954 to 034c995b has its CatchHandler @ 033c9a60 */
      (pSVar3->fields)._size = 0;
      (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
      if (0 < iVar1) {
        System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,iVar1,(MethodInfo *)0x0);
      }
      pSVar5 = (__this->fields).GOAMNFEGHIB;
      if (pSVar5 != (System_Collections_Generic_List_ResolutionImage__o *)0x0) {
                    /* try { // try from 033c9978 to 034c9983 has its CatchHandler @ 033c9a58 */
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_78,(System_Collections_Generic_List_object__o *)pSVar5,
                   Method_System_Collections_Generic_List<ResolutionImage>_GetEnumerator__);
        while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (&local_78,
                                  Method_System_Collections_Generic_List_Enumerator<ResolutionImage>_MoveNext__
                                 ), bVar2) {
          if ((UnityEngine_Component_o *)local_78.fields._current == (UnityEngine_Component_o *)0x0)
          {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pUVar4 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)local_78.fields._current,(MethodInfo *)0x0)
          ;
          Util__JODGPLBHHIA(pUVar4,false,(MethodInfo *)0x0);
        }
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_78,
                   Method_System_Collections_Generic_List_Enumerator<ResolutionImage>_Dispose__);
        pSVar5 = (__this->fields).GOAMNFEGHIB;
        if (pSVar5 != (System_Collections_Generic_List_ResolutionImage__o *)0x0) {
          iVar1 = (pSVar5->fields)._size;
                    /* try { // try from 033c99d0 to 034c99db has its CatchHandler @ 033c9a54 */
          (pSVar5->fields)._size = 0;
          (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
          if (0 < iVar1) {
                    /* try { // try from 033c99dc to 034c9a13 has its CatchHandler @ 033c9890 */
            System_Array__Clear((System_Array_o *)(pSVar5->fields)._items,0,iVar1,(MethodInfo *)0x0)
            ;
          }
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public virtual void SetTouchEnabled(bool DMCLFENLIHB)  [RVA 0x32C9AE8]
// Nekki.SF2.GUI.Map.LampsPanel$$SetTouchEnabled @ RVA 0x32C9AE8

void Nekki_SF2_GUI_Map_LampsPanel__SetTouchEnabled
               (Nekki_SF2_GUI_Map_LampsPanel_o *__this,bool DMCLFENLIHB,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_Button__o *__this_00;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_0456750b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Button>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Button>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Button>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Button>_GetEnumerator__);
    DAT_0456750b = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).NPKEJHGOGOE;
  if (__this_00 != (System_Collections_Generic_List_Button__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<Button>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<Button>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_38,Method_System_Collections_Generic_List_Enumerator<Button>_Dispose__);
        return;
      }
      if ((UnityEngine_UI_Selectable_o *)local_38.fields._current ==
          (UnityEngine_UI_Selectable_o *)0x0) break;
      UnityEngine_UI_Selectable__set_interactable
                ((UnityEngine_UI_Selectable_o *)local_38.fields._current,DMCLFENLIHB,
                 (MethodInfo *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void remove_OnClickLamp(Action<int> CJNHFNHJHPE)  [RVA 0x32C9C40]
// Nekki.SF2.GUI.Map.LampsPanel$$remove_OnClickLamp @ RVA 0x32C9C40

void Nekki_SF2_GUI_Map_LampsPanel__remove_OnClickLamp
               (Nekki_SF2_GUI_Map_LampsPanel_o *__this,System_Action_int__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  System_Action_int__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_int__o *pSVar5;
  System_Action_int__o **ppSVar6;
  System_Action_int__o *source;
  
  if ((DAT_0456750c & 1) == 0) {
    FUN_01bab630(&System_Action<int>_TypeInfo);
    DAT_0456750c = 1;
  }
  ppSVar6 = &(__this->fields).BAIENFNFLAI;
  source = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<int>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<int>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_int__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== public void ToggleLocationName(bool CJNHFNHJHPE)  [RVA 0x32C9CF0]
// Nekki.SF2.GUI.Map.LampsPanel$$ToggleLocationName @ RVA 0x32C9CF0

void Nekki_SF2_GUI_Map_LampsPanel__ToggleLocationName
               (Nekki_SF2_GUI_Map_LampsPanel_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
  __this_00 = (__this->fields)._locationName;
  if ((__this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Init()  [RVA 0x32C9D20]
// Nekki.SF2.GUI.Map.LampsPanel$$Init @ RVA 0x32C9D20

void Nekki_SF2_GUI_Map_LampsPanel__Init(Nekki_SF2_GUI_Map_LampsPanel_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  MethodInfo *extraout_x1;
  MOAHCJAFGNJ_NEEADEALBAI_o *pMVar1;
  
  if ((DAT_0456750d & 1) == 0) {
    FUN_01bab630(&MOAHCJAFGNJ_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_0456750d = 1;
    method = extraout_x1;
  }
  if ((MOAHCJAFGNJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MOAHCJAFGNJ_TypeInfo,method);
  }
  pMVar1 = MOAHCJAFGNJ_TypeInfo->static_fields->HLGBDNJJIMH;
  if (pMVar1 != (MOAHCJAFGNJ_NEEADEALBAI_o *)0x0) {
    __this_00 = (__this->fields)._locationName;
    (__this->fields).FAOGPCBDLCE = (pMVar1->fields).LDKIEDOLMPM;
    if (__this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      Nekki_SF2_GUI_LabelAlias__set_Alias(__this_00,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void LKNLOCEJOAN(object IMMNELPBGIF)  [RVA 0x32C9DB0]
// Nekki.SF2.GUI.Map.LampsPanel$$LKNLOCEJOAN @ RVA 0x32C9DB0

void Nekki_SF2_GUI_Map_LampsPanel__LKNLOCEJOAN
               (Nekki_SF2_GUI_Map_LampsPanel_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  undefined4 *puVar1;
  System_Action_int__o *pSVar2;
  
  if ((DAT_0456750e & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    DAT_0456750e = 1;
  }
  pSVar2 = (__this->fields).BAIENFNFLAI;
  if ((pSVar2 != (System_Action_int__o *)0x0) && (IMMNELPBGIF != (Il2CppObject *)0x0)) {
    if ((IMMNELPBGIF->klass->_1).element_class == (int_TypeInfo->_1).element_class) {
      puVar1 = (undefined4 *)thunk_FUN_01bda96c();
                    /* WARNING: Could not recover jumptable at 0x033c9e2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(pSVar2->fields).super.super.invoke_impl)
                ((pSVar2->fields).super.super.method_code,*puVar1,
                 (pSVar2->fields).super.super.method);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01babc64(IMMNELPBGIF);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SetLampsVisible(bool CJNHFNHJHPE)  [RVA 0x32C9E38]
// Nekki.SF2.GUI.Map.LampsPanel$$SetLampsVisible @ RVA 0x32C9E38

void Nekki_SF2_GUI_Map_LampsPanel__SetLampsVisible
               (Nekki_SF2_GUI_Map_LampsPanel_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_List_Button__o *pSVar3;
  UnityEngine_GameObject_o *pUVar4;
  System_Collections_Generic_List_ResolutionImage__o *pSVar5;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar6;
  System_Collections_Generic_List_Enumerator_T__o local_b8;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_0456750f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Button>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ResolutionImage>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ResolutionImage>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Button>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ResolutionImage>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Button>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ResolutionImage>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Button>_GetEnumerator__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456750f = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_a0.fields._current = (Il2CppObject *)0x0;
  pSVar3 = (__this->fields).NPKEJHGOGOE;
  if (pSVar3 != (System_Collections_Generic_List_Button__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_b8,(System_Collections_Generic_List_object__o *)pSVar3,
               Method_System_Collections_Generic_List<Button>_GetEnumerator__);
    local_80.fields._index = local_b8.fields._index;
    local_80.fields._version = local_b8.fields._version;
    local_80.fields._list = local_b8.fields._list;
    local_80.fields._current = local_b8.fields._current;
    while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_80,
                              Method_System_Collections_Generic_List_Enumerator<Button>_MoveNext__),
          pIVar1 = local_80.fields._current, bVar2) {
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pIVar1,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar2) {
        if ((UnityEngine_Object_o *)pIVar1 == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pUVar4 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pIVar1,(MethodInfo *)0x0);
        if (pUVar4 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        UnityEngine_GameObject__SetActive(pUVar4,CJNHFNHJHPE,(MethodInfo *)0x0);
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_80,Method_System_Collections_Generic_List_Enumerator<Button>_Dispose__);
    pSVar5 = (__this->fields).GOAMNFEGHIB;
    if (pSVar5 != (System_Collections_Generic_List_ResolutionImage__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_b8,(System_Collections_Generic_List_object__o *)pSVar5,
                 Method_System_Collections_Generic_List<ResolutionImage>_GetEnumerator__);
      local_a0.fields._index = local_b8.fields._index;
      local_a0.fields._version = local_b8.fields._version;
      local_a0.fields._list = local_b8.fields._list;
      local_a0.fields._current = local_b8.fields._current;
      while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_a0,
                                Method_System_Collections_Generic_List_Enumerator<ResolutionImage>_MoveNext__
                               ), pIVar1 = local_a0.fields._current, bVar2) {
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar2 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pIVar1,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (bVar2) {
          if ((UnityEngine_Object_o *)pIVar1 == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pUVar4 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pIVar1,(MethodInfo *)0x0);
          if (pUVar4 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          UnityEngine_GameObject__SetActive(pUVar4,CJNHFNHJHPE,(MethodInfo *)0x0);
        }
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_a0,
                 Method_System_Collections_Generic_List_Enumerator<ResolutionImage>_Dispose__);
      pSVar3 = (__this->fields).FGFAMIEFDEO;
      if (pSVar3 != (System_Collections_Generic_List_Button__o *)0x0) {
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_b8,(System_Collections_Generic_List_object__o *)pSVar3,
                   Method_System_Collections_Generic_List<Button>_GetEnumerator__);
        local_80.fields._index = local_b8.fields._index;
        local_80.fields._version = local_b8.fields._version;
        local_80.fields._list = local_b8.fields._list;
        local_80.fields._current = local_b8.fields._current;
        while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (&local_80,
                                  Method_System_Collections_Generic_List_Enumerator<Button>_MoveNext__
                                 ), pIVar1 = local_80.fields._current, bVar2) {
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar2 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pIVar1,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          if (bVar2) {
            if ((UnityEngine_Object_o *)pIVar1 == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pUVar4 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pIVar1,(MethodInfo *)0x0);
            if (pUVar4 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            UnityEngine_GameObject__SetActive(pUVar4,CJNHFNHJHPE,(MethodInfo *)0x0);
          }
        }
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_80,Method_System_Collections_Generic_List_Enumerator<Button>_Dispose__);
        pSVar5 = (__this->fields).GENBELDCMGN;
        if (pSVar5 != (System_Collections_Generic_List_ResolutionImage__o *)0x0) {
          System_Collections_Generic_List<object>__GetEnumerator
                    (&local_b8,(System_Collections_Generic_List_object__o *)pSVar5,
                     Method_System_Collections_Generic_List<ResolutionImage>_GetEnumerator__);
          local_a0.fields._index = local_b8.fields._index;
          local_a0.fields._version = local_b8.fields._version;
          local_a0.fields._list = local_b8.fields._list;
          local_a0.fields._current = local_b8.fields._current;
          while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                   (&local_a0,
                                    Method_System_Collections_Generic_List_Enumerator<ResolutionImage>_MoveNext__
                                   ), pIVar1 = local_a0.fields._current, bVar2) {
            if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            bVar2 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)pIVar1,(UnityEngine_Object_o *)0x0,
                               (MethodInfo *)0x0);
            if (bVar2) {
              if ((UnityEngine_Object_o *)pIVar1 == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pUVar4 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pIVar1,(MethodInfo *)0x0);
              if (pUVar4 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              UnityEngine_GameObject__SetActive(pUVar4,CJNHFNHJHPE,(MethodInfo *)0x0);
            }
          }
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_a0,
                     Method_System_Collections_Generic_List_Enumerator<ResolutionImage>_Dispose__);
          pNVar6 = (__this->fields)._lampOn;
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar2 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pNVar6,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          if (bVar2) {
            pNVar6 = (__this->fields)._lampOn;
            if ((pNVar6 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
               (pUVar4 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pNVar6,(MethodInfo *)0x0),
               pUVar4 == (UnityEngine_GameObject_o *)0x0)) goto LAB_033ca1dc;
            UnityEngine_GameObject__SetActive(pUVar4,CJNHFNHJHPE,(MethodInfo *)0x0);
          }
          return;
        }
      }
    }
  }
LAB_033ca1dc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void add_OnClickLamp(Action<int> CJNHFNHJHPE)  [RVA 0x32CA3BC]
// Nekki.SF2.GUI.Map.LampsPanel$$add_OnClickLamp @ RVA 0x32CA3BC

void Nekki_SF2_GUI_Map_LampsPanel__add_OnClickLamp
               (Nekki_SF2_GUI_Map_LampsPanel_o *__this,System_Action_int__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  System_Action_int__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_int__o *pSVar5;
  System_Action_int__o **ppSVar6;
  System_Action_int__o *a;
  
  if ((DAT_04567510 & 1) == 0) {
    FUN_01bab630(&System_Action<int>_TypeInfo);
    DAT_04567510 = 1;
  }
  ppSVar6 = &(__this->fields).BAIENFNFLAI;
  a = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<int>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<int>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_int__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== private void OKELAKIIBAO(int DPJIDNBJIBG)  [RVA 0x32C9570]
// Nekki.SF2.GUI.Map.LampsPanel$$OKELAKIIBAO @ RVA 0x32C9570

void Nekki_SF2_GUI_Map_LampsPanel__OKELAKIIBAO
               (Nekki_SF2_GUI_Map_LampsPanel_o *__this,int32_t DPJIDNBJIBG,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Component_o *__this_02;
  UnityEngine_Transform_o *__this_03;
  System_Collections_Generic_List_Button__o *pSVar1;
  UnityEngine_Vector3_o value;
  
  if ((DAT_04567511 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<Button>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Button>_get_Item__);
    DAT_04567511 = 1;
  }
  pSVar1 = (__this->fields).NPKEJHGOGOE;
  if (pSVar1 != (System_Collections_Generic_List_Button__o *)0x0) {
    if ((pSVar1->fields)._size < 1) {
      return;
    }
    __this_00 = (__this->fields)._lampOn;
    if (__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      __this_01 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
      pSVar1 = (__this->fields).NPKEJHGOGOE;
      if ((((pSVar1 != (System_Collections_Generic_List_Button__o *)0x0) &&
           (__this_02 = (UnityEngine_Component_o *)
                        System_Collections_Generic_List<object>__get_Item
                                  ((System_Collections_Generic_List_object__o *)pSVar1,DPJIDNBJIBG,
                                   Method_System_Collections_Generic_List<Button>_get_Item__),
           __this_02 != (UnityEngine_Component_o *)0x0)) &&
          (__this_03 = UnityEngine_Component__get_transform(__this_02,(MethodInfo *)0x0),
          __this_03 != (UnityEngine_Transform_o *)0x0)) &&
         (value = UnityEngine_Transform__get_position(__this_03,(MethodInfo *)0x0),
         __this_01 != (UnityEngine_Transform_o *)0x0)) {
        UnityEngine_Transform__set_position(__this_01,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void FKJDCPIAFLK(List<Button> ACDNINGOMHO)  [RVA 0x32CA46C]
// Nekki.SF2.GUI.Map.LampsPanel$$FKJDCPIAFLK @ RVA 0x32CA46C

void Nekki_SF2_GUI_Map_LampsPanel__FKJDCPIAFLK
               (Nekki_SF2_GUI_Map_LampsPanel_o *__this,
               System_Collections_Generic_List_Button__o *ACDNINGOMHO,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  MOAHCJAFGNJ_c *pMVar3;
  Il2CppObject *pIVar4;
  MOAHCJAFGNJ_NEEADEALBAI_o *pMVar5;
  int iVar6;
  
  if ((DAT_04567512 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<Button>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Button>_get_Item__);
    FUN_01bab630(&MOAHCJAFGNJ_TypeInfo);
    DAT_04567512 = 1;
  }
  if ((MOAHCJAFGNJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pMVar3 = MOAHCJAFGNJ_TypeInfo;
  pMVar5 = MOAHCJAFGNJ_TypeInfo->static_fields->HLGBDNJJIMH;
  if (pMVar5 != (MOAHCJAFGNJ_NEEADEALBAI_o *)0x0) {
    uVar1 = (pMVar5->fields).NJAMIACMNCG;
    if (0 < (int)uVar1) {
      iVar6 = (__this->fields).GJNBBEBNALP;
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = 0xff / uVar1;
      }
      if ((__this->fields).ABNHKOFADPD == false) {
        iVar6 = iVar6 + uVar2;
        (__this->fields).GJNBBEBNALP = iVar6;
        if (0xfe < iVar6) {
          (__this->fields).GJNBBEBNALP = 0xff;
          (__this->fields).ABNHKOFADPD = true;
          if ((pMVar3->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
            pMVar5 = MOAHCJAFGNJ_TypeInfo->static_fields->HLGBDNJJIMH;
            if (pMVar5 == (MOAHCJAFGNJ_NEEADEALBAI_o *)0x0) goto LAB_033ca5d0;
          }
          (__this->fields).FAOGPCBDLCE = (pMVar5->fields).LDKIEDOLMPM;
        }
      }
      else {
        iVar6 = iVar6 - uVar2;
        (__this->fields).GJNBBEBNALP = iVar6;
        if (iVar6 < 1) {
          (__this->fields).GJNBBEBNALP = 0;
          (__this->fields).ABNHKOFADPD = false;
        }
      }
      if (ACDNINGOMHO == (System_Collections_Generic_List_Button__o *)0x0) goto LAB_033ca5d0;
      if (0 < (ACDNINGOMHO->fields)._size) {
        iVar6 = 0;
        do {
          pIVar4 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)ACDNINGOMHO,iVar6,
                              Method_System_Collections_Generic_List<Button>_get_Item__);
          if (pIVar4 == (Il2CppObject *)0x0) goto LAB_033ca5d0;
          LJLLAKHOFFF__IFBBIDIEBEL
                    ((UnityEngine_UI_Graphic_o *)pIVar4[0xe].klass,
                     (float)(__this->fields).GJNBBEBNALP / 255.0,(MethodInfo *)0x0);
          iVar6 = iVar6 + 1;
        } while (iVar6 < (ACDNINGOMHO->fields)._size);
      }
    }
    return;
  }
LAB_033ca5d0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int GetCurrentLamp()  [RVA 0x32CA5D4]
// Nekki.SF2.GUI.Map.LampsPanel$$GetCurrentLamp @ RVA 0x32CA5D4

int32_t Nekki_SF2_GUI_Map_LampsPanel__GetCurrentLamp
                  (Nekki_SF2_GUI_Map_LampsPanel_o *__this,MethodInfo *method)

{
  return (__this->fields).BJJNEHBCHKE;
}


// ===== public void Flashing()  [RVA 0x32CA5DC]
// Nekki.SF2.GUI.Map.LampsPanel$$Flashing @ RVA 0x32CA5DC

void Nekki_SF2_GUI_Map_LampsPanel__Flashing
               (Nekki_SF2_GUI_Map_LampsPanel_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  MOAHCJAFGNJ_NEEADEALBAI_o *pMVar3;
  
  if ((DAT_04567513 & 1) == 0) {
    FUN_01bab630(&MOAHCJAFGNJ_TypeInfo);
    DAT_04567513 = 1;
    method = extraout_x1;
  }
  iVar1 = (__this->fields).FAOGPCBDLCE;
  if (iVar1 < 1) {
    if ((MOAHCJAFGNJ_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(MOAHCJAFGNJ_TypeInfo,method);
    }
    pMVar3 = MOAHCJAFGNJ_TypeInfo->static_fields->HLGBDNJJIMH;
    if (pMVar3 == (MOAHCJAFGNJ_NEEADEALBAI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (0 < (pMVar3->fields).NJAMIACMNCG) {
      iVar1 = (pMVar3->fields).CBEFHLDCMFF;
      if ((__this->fields).MIIHHLIFPJM != false) {
        Nekki_SF2_GUI_Map_LampsPanel__FKJDCPIAFLK(__this,(__this->fields).FGFAMIEFDEO,in_x2);
        iVar2 = (__this->fields).GJNBBEBNALP;
        if ((iVar2 <= iVar1) && ((__this->fields).ABNHKOFADPD != false)) {
          (__this->fields).AJJDFCMECEO = true;
        }
        if (iVar2 < 1) {
          (__this->fields).MIIHHLIFPJM = false;
        }
      }
      if ((__this->fields).AJJDFCMECEO != false) {
        Nekki_SF2_GUI_Map_LampsPanel__AGHFDDGCCJN(__this,(__this->fields).GENBELDCMGN,in_x2);
        iVar2 = (__this->fields).NFBFPDJLJBG;
        if ((iVar2 <= iVar1) && ((__this->fields).CHEKKHNGMMP != false)) {
          (__this->fields).MIIHHLIFPJM = true;
        }
        if (iVar2 < 1) {
          (__this->fields).AJJDFCMECEO = false;
        }
      }
    }
  }
  else {
    (__this->fields).FAOGPCBDLCE = iVar1 + -1;
  }
  return;
}

