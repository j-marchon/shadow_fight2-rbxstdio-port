// Nekki.SF2.GUI.Dialogs.EventDialog$$KDOMLBPOJNA @ RVA 0x35814E4

void Nekki_SF2_GUI_Dialogs_EventDialog__KDOMLBPOJNA
               (Nekki_SF2_GUI_Dialogs_EventDialog_o *__this,
               System_Collections_Generic_List_MapButton__o *EDEHNHIHDDH,
               UnityEngine_RectTransform_o *DOINNNFBLFB,UnityEngine_RectTransform_o *GLOCBPEJDIC,
               int32_t DMCDIFICIKI,float KNBLBCAPOCH,MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  Nekki_SF2_GUI_Map_MapButton_o *pNVar2;
  UnityEngine_Component_o *pUVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_RectTransform_o *pUVar5;
  Nekki_SF2_GUI_Dialogs_EventDialog_o *__this_00;
  Nekki_SF2_GUI_Dialogs_EventDialog_o *__this_01;
  MethodInfo *pMVar6;
  int iVar7;
  int iVar8;
  UnityEngine_Vector2_o UVar9;
  
  if ((DAT_04568cd1 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MapButton>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MapButton>_get_Item__);
    DAT_04568cd1 = 1;
  }
  if ((((DOINNNFBLFB != (UnityEngine_RectTransform_o *)0x0) &&
       (pUVar1 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)DOINNNFBLFB,(MethodInfo *)0x0),
       pUVar1 != (UnityEngine_GameObject_o *)0x0)) &&
      (UnityEngine_GameObject__SetActive(pUVar1,false,(MethodInfo *)0x0),
      GLOCBPEJDIC != (UnityEngine_RectTransform_o *)0x0)) &&
     ((pUVar1 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)GLOCBPEJDIC,(MethodInfo *)0x0),
      pUVar1 != (UnityEngine_GameObject_o *)0x0 &&
      (UnityEngine_GameObject__SetActive(pUVar1,false,(MethodInfo *)0x0),
      EDEHNHIHDDH != (System_Collections_Generic_List_MapButton__o *)0x0)))) {
    if ((EDEHNHIHDDH->fields)._size < 1) {
      return;
    }
    pUVar1 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)DOINNNFBLFB,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(pUVar1,true,(MethodInfo *)0x0);
      pUVar1 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)GLOCBPEJDIC,(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
        pMVar6 = (MethodInfo *)0x0;
        UnityEngine_GameObject__SetActive
                  (pUVar1,DMCDIFICIKI < (EDEHNHIHDDH->fields)._size,(MethodInfo *)0x0);
        iVar7 = (EDEHNHIHDDH->fields)._size;
        if (DMCDIFICIKI <= iVar7) {
          iVar7 = DMCDIFICIKI;
        }
        if (0 < iVar7) {
          iVar8 = 0;
          do {
            pNVar2 = (Nekki_SF2_GUI_Map_MapButton_o *)
                     System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)EDEHNHIHDDH,iVar8,
                                Method_System_Collections_Generic_List<MapButton>_get_Item__);
            if (pNVar2 == (Nekki_SF2_GUI_Map_MapButton_o *)0x0) goto LAB_03681764;
            Nekki_SF2_GUI_Map_MapButton__set_RealWidth(pNVar2,KNBLBCAPOCH,(MethodInfo *)0x0);
            pUVar3 = (UnityEngine_Component_o *)
                     System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)EDEHNHIHDDH,iVar8,
                                Method_System_Collections_Generic_List<MapButton>_get_Item__);
            if ((pUVar3 == (UnityEngine_Component_o *)0x0) ||
               (pUVar4 = UnityEngine_Component__get_transform(pUVar3,(MethodInfo *)0x0),
               pUVar4 == (UnityEngine_Transform_o *)0x0)) goto LAB_03681764;
            pMVar6 = (MethodInfo *)0x0;
            UnityEngine_Transform__SetParent
                      (pUVar4,(UnityEngine_Transform_o *)DOINNNFBLFB,false,(MethodInfo *)0x0);
            iVar8 = iVar8 + 1;
          } while (iVar7 != iVar8);
        }
        pUVar5 = Nekki_SF2_GUI_Dialogs_BaseDialog__get_RectTransform
                           ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
        if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
          UVar9 = UnityEngine_RectTransform__get_sizeDelta(pUVar5,(MethodInfo *)0x0);
          Nekki_SF2_GUI_Dialogs_EventDialog__OFAKFHHDEKO
                    (__this_00,DOINNNFBLFB,((float)iVar7 * KNBLBCAPOCH - UVar9.fields.x) * 0.5,
                     pMVar6);
          iVar7 = DMCDIFICIKI;
          if ((EDEHNHIHDDH->fields)._size <= DMCDIFICIKI) {
            return;
          }
          do {
            pNVar2 = (Nekki_SF2_GUI_Map_MapButton_o *)
                     System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)EDEHNHIHDDH,iVar7,
                                Method_System_Collections_Generic_List<MapButton>_get_Item__);
            if (pNVar2 == (Nekki_SF2_GUI_Map_MapButton_o *)0x0) goto LAB_03681764;
            Nekki_SF2_GUI_Map_MapButton__set_RealWidth(pNVar2,KNBLBCAPOCH,(MethodInfo *)0x0);
            pUVar3 = (UnityEngine_Component_o *)
                     System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)EDEHNHIHDDH,iVar7,
                                Method_System_Collections_Generic_List<MapButton>_get_Item__);
            if ((pUVar3 == (UnityEngine_Component_o *)0x0) ||
               (pUVar4 = UnityEngine_Component__get_transform(pUVar3,(MethodInfo *)0x0),
               pUVar4 == (UnityEngine_Transform_o *)0x0)) goto LAB_03681764;
            pMVar6 = (MethodInfo *)0x0;
            UnityEngine_Transform__SetParent
                      (pUVar4,(UnityEngine_Transform_o *)GLOCBPEJDIC,false,(MethodInfo *)0x0);
            iVar8 = (EDEHNHIHDDH->fields)._size;
            iVar7 = iVar7 + 1;
          } while (iVar7 < iVar8);
          pUVar5 = Nekki_SF2_GUI_Dialogs_BaseDialog__get_RectTransform
                             ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
          if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
            UVar9 = UnityEngine_RectTransform__get_sizeDelta(pUVar5,(MethodInfo *)0x0);
            Nekki_SF2_GUI_Dialogs_EventDialog__OFAKFHHDEKO
                      (__this_01,GLOCBPEJDIC,
                       ((float)(iVar8 - DMCDIFICIKI) * KNBLBCAPOCH - UVar9.fields.x) * 0.5,pMVar6);
            return;
          }
        }
      }
    }
  }
LAB_03681764:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

