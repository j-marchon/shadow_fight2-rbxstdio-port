// TypeDefIndex 3338
// Namespace: Nekki.SF2.GUI.Fight
// public class RoundsPanel : MonoBehaviour
// Fields:
//   private List<ResolutionImage> BPPCPHCDICD; // 0x20
//   private string _storyRoundDone; // 0x28
//   private string _pvpRoundDone; // 0x30
//   private string _roundUndone; // 0x38

// ===== private string PGEPDONKOIN()  [RVA 0x352E9C4]
// Nekki.SF2.GUI.Fight.RoundsPanel$$PGEPDONKOIN @ RVA 0x352E9C4

System_String_o *
Nekki_SF2_GUI_Fight_RoundsPanel__PGEPDONKOIN
          (Nekki_SF2_GUI_Fight_RoundsPanel_o *__this,MethodInfo *method)

{
  long lVar1;
  int32_t iVar2;
  Fight_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  
  if ((DAT_04568a44 & 1) == 0) {
    FUN_01bab630(&Fight_TypeInfo);
    DAT_04568a44 = 1;
    method = extraout_x1;
  }
  if ((Fight_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Fight_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b7f == '\0') {
    FUN_01bab630(&Fight_TypeInfo);
    DAT_04565b7f = '\x01';
    method = extraout_x1_01;
  }
  if ((Fight_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Fight_TypeInfo,method);
  }
  __this_00 = Fight_TypeInfo->static_fields->IGABFCCGLCO;
  if (__this_00 != (Fight_o *)0x0) {
    iVar2 = Fight__IHMLDBDLJON(__this_00,(MethodInfo *)0x0);
    lVar1 = 0x30;
    if (iVar2 != 0x11) {
      lVar1 = 0x28;
    }
    return *(System_String_o **)((long)&__this->klass + lVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private string MEBCFCOOPMB()  [RVA 0x352EA74]
// Nekki.SF2.GUI.Fight.RoundsPanel$$MEBCFCOOPMB @ RVA 0x352EA74

System_String_o *
Nekki_SF2_GUI_Fight_RoundsPanel__MEBCFCOOPMB
          (Nekki_SF2_GUI_Fight_RoundsPanel_o *__this,MethodInfo *method)

{
  return (__this->fields)._roundUndone;
}


// ===== public void UpdateVictories(int EKFFBGHHCJA)  [RVA 0x352EA7C]
// Nekki.SF2.GUI.Fight.RoundsPanel$$UpdateVictories @ RVA 0x352EA7C

void Nekki_SF2_GUI_Fight_RoundsPanel__UpdateVictories
               (Nekki_SF2_GUI_Fight_RoundsPanel_o *__this,int32_t EKFFBGHHCJA,MethodInfo *method)

{
  System_Collections_Generic_List_ResolutionImage__o *__this_00;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar1;
  System_String_o *CJNHFNHJHPE;
  MethodInfo *method_00;
  int iVar2;
  
  if ((DAT_04568a45 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ResolutionImage>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ResolutionImage>_get_Item__);
    DAT_04568a45 = 1;
  }
  __this_00 = (__this->fields).BPPCPHCDICD;
  if (__this_00 != (System_Collections_Generic_List_ResolutionImage__o *)0x0) {
    iVar2 = (__this_00->fields)._size;
    if (iVar2 <= EKFFBGHHCJA) {
      EKFFBGHHCJA = iVar2;
    }
    if (0 < EKFFBGHHCJA) {
      iVar2 = 0;
      do {
        if (__this_00 == (System_Collections_Generic_List_ResolutionImage__o *)0x0)
        goto LAB_0362eb5c;
        pNVar1 = (Nekki_SF2_GUI_ResolutionImage_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)__this_00,iVar2,
                            Method_System_Collections_Generic_List<ResolutionImage>_get_Item__);
        CJNHFNHJHPE = Nekki_SF2_GUI_Fight_RoundsPanel__PGEPDONKOIN(__this,method_00);
        if (pNVar1 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_0362eb5c;
        Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar1,CJNHFNHJHPE,(MethodInfo *)0x0);
        __this_00 = (__this->fields).BPPCPHCDICD;
        iVar2 = iVar2 + 1;
      } while (EKFFBGHHCJA != iVar2);
      if (__this_00 == (System_Collections_Generic_List_ResolutionImage__o *)0x0) goto LAB_0362eb5c;
    }
    do {
      if ((__this_00->fields)._size <= EKFFBGHHCJA) {
        return;
      }
      pNVar1 = (Nekki_SF2_GUI_ResolutionImage_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,EKFFBGHHCJA,
                          Method_System_Collections_Generic_List<ResolutionImage>_get_Item__);
      if (pNVar1 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) break;
                    /* try { // try from 0362eb44 to 0372ebdf has its CatchHandler @ 0362eb44
                       catch() { ... } // from try @ 0362eb44 with catch @ 0362eb44
                       catch() { ... } // from try @ 0362ebe8 with catch @ 0362eb44
                       catch() { ... } // from try @ 0362ec3c with catch @ 0362eb44
                       catch() { ... } // from try @ 0362ec60 with catch @ 0362eb44
                       catch() { ... } // from try @ 0362ec98 with catch @ 0362eb44 */
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                (pNVar1,(__this->fields)._roundUndone,(MethodInfo *)0x0);
      __this_00 = (__this->fields).BPPCPHCDICD;
      EKFFBGHHCJA = EKFFBGHHCJA + 1;
    } while (__this_00 != (System_Collections_Generic_List_ResolutionImage__o *)0x0);
  }
LAB_0362eb5c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x352EB70]
// Nekki.SF2.GUI.Fight.RoundsPanel$$.ctor @ RVA 0x352EB70

void Nekki_SF2_GUI_Fight_RoundsPanel___ctor
               (Nekki_SF2_GUI_Fight_RoundsPanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_ResolutionImage__o *__this_00;
  System_Collections_Generic_List_ResolutionImage__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568a46 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ResolutionImage>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ResolutionImage>_TypeInfo);
    FUN_01bab630(&StringLiteral_6368/*"FightUI.Round_Undone"*/);
    FUN_01bab630(&StringLiteral_6367/*"FightUI.Round_Done"*/);
                    /* try { // try from 0362ebe0 to 0372ebe7 has its CatchHandler @ 0362ec44 */
    DAT_04568a46 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 0362ebe8 to 0372ec37 has its CatchHandler @ 0362eb44 */
  __this_00 = (System_Collections_Generic_List_ResolutionImage__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<ResolutionImage>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<ResolutionImage>__ctor__);
  ppSVar1 = &(__this->fields).BPPCPHCDICD;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  (__this->fields)._storyRoundDone = StringLiteral_6367/*"FightUI.Round_Done"*/;
  thunk_FUN_01c20e04();
  (__this->fields)._pvpRoundDone = StringLiteral_6367/*"FightUI.Round_Done"*/;
  thunk_FUN_01c20e04();
  (__this->fields)._roundUndone = StringLiteral_6368/*"FightUI.Round_Undone"*/;
                    /* try { // try from 0362ec38 to 0372ec3b has its CatchHandler @ 0362ec40 */
  thunk_FUN_01c20e04();
                    /* try { // try from 0362ec3c to 0372ec5b has its CatchHandler @ 0362eb44 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0362ec38 with catch @ 0362ec40
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0362ebe0 with catch @ 0362ec44
                        */
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void Init(int DKLNFMKFLFJ)  [RVA 0x352EC58]
// Nekki.SF2.GUI.Fight.RoundsPanel$$Init @ RVA 0x352EC58

void Nekki_SF2_GUI_Fight_RoundsPanel__Init
               (Nekki_SF2_GUI_Fight_RoundsPanel_o *__this,int32_t DKLNFMKFLFJ,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  float fVar3;
  bool bVar4;
  UnityEngine_Object_o *__this_00;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_Transform_o *parent;
  Nekki_SF2_GUI_ResolutionImage_o *__this_01;
  System_Collections_Generic_List_ResolutionImage__o *__this_02;
  UnityEngine_RectTransform_o *pUVar6;
  Nekki_SF2_GUI_ResolutionImage_array *pNVar7;
  float fVar8;
  float fVar9;
  UnityEngine_Vector2_o UVar10;
  
                    /* try { // try from 0362ec5c to 0372ec5f has its CatchHandler @ 0362ec88 */
                    /* try { // try from 0362ec60 to 0372ec8f has its CatchHandler @ 0362eb44 */
  if ((DAT_04568a47 & 1) == 0) {
                    /* catch() { ... } // from try @ 0362ec5c with catch @ 0362ec88 */
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<ResolutionImageLE>__);
                    /* try { // try from 0362ec90 to 0372ec97 has its CatchHandler @ 0362ecac */
                    /* try { // try from 0362ec98 to 0372eca3 has its CatchHandler @ 0362eb44 */
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
                    /* try { // try from 0362eca4 to 0372ecab has its CatchHandler @ 0362ecac */
    FUN_01bab630(&Method_System_Collections_Generic_List<ResolutionImage>_Add__);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0362ec90 with catch @ 0362ecac
                       catch(type#2 @ 00000000) { ... } // from try @ 0362eca4 with catch @ 0362ecac
                        */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    FUN_01bab630(&StringLiteral_11431/*"Round"*/);
    DAT_04568a47 = 1;
  }
  if (DKLNFMKFLFJ < 1) {
    fVar9 = 0.0;
    fVar8 = 0.0;
  }
  else {
    fVar8 = 0.0;
    fVar9 = 0.0;
    do {
      __this_00 = (UnityEngine_Object_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
      UnityEngine_GameObject___ctor((UnityEngine_GameObject_o *)__this_00,(MethodInfo *)0x0);
      if (__this_00 == (UnityEngine_Object_o *)0x0) goto LAB_0362eef0;
      UnityEngine_Object__set_name(__this_00,StringLiteral_11431/*"Round"*/,(MethodInfo *)0x0);
      pUVar5 = UnityEngine_GameObject__get_transform
                         ((UnityEngine_GameObject_o *)__this_00,(MethodInfo *)0x0);
      parent = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto LAB_0362eef0;
      UnityEngine_Transform__SetParent(pUVar5,parent,false,(MethodInfo *)0x0);
      __this_01 = (Nekki_SF2_GUI_ResolutionImage_o *)
                  UnityEngine_GameObject__AddComponent<object>
                            ((UnityEngine_GameObject_o *)__this_00,
                             Method_UnityEngine_GameObject_AddComponent<ResolutionImageLE>__);
      if (__this_01 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_0362eef0;
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                (__this_01,(__this->fields)._roundUndone,(MethodInfo *)0x0);
      (*(__this_01->klass->vtable)._45_SetNativeSize.methodPtr)
                (__this_01,(__this_01->klass->vtable)._45_SetNativeSize.method);
      pUVar5 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
      if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto LAB_0362eef0;
      UnityEngine_Transform__SetAsFirstSibling(pUVar5,(MethodInfo *)0x0);
      lVar2 = Method_System_Collections_Generic_List<ResolutionImage>_Add__;
      __this_02 = (__this->fields).BPPCPHCDICD;
      if (__this_02 == (System_Collections_Generic_List_ResolutionImage__o *)0x0) goto LAB_0362eef0;
      pNVar7 = (__this_02->fields)._items;
      (__this_02->fields)._version = (__this_02->fields)._version + 1;
      if (pNVar7 == (Nekki_SF2_GUI_ResolutionImage_array *)0x0) goto LAB_0362eef0;
      uVar1 = (__this_02->fields)._size;
      if (uVar1 < (uint)pNVar7->max_length) {
        (__this_02->fields)._size = uVar1 + 1;
        pNVar7->m_Items[(int)uVar1] = __this_01;
        thunk_FUN_01c20e04(pNVar7->m_Items + (int)uVar1,__this_01);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_02,(Il2CppObject *)__this_01,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      pUVar6 = UnityEngine_UI_Graphic__get_rectTransform
                         ((UnityEngine_UI_Graphic_o *)__this_01,(MethodInfo *)0x0);
      if (pUVar6 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0362eef0;
      UVar10 = UnityEngine_RectTransform__get_sizeDelta(pUVar6,(MethodInfo *)0x0);
      fVar3 = UVar10.fields.y;
      if (UVar10.fields.y <= fVar8) {
        fVar3 = fVar8;
      }
      fVar8 = fVar3;
      DKLNFMKFLFJ = DKLNFMKFLFJ + -1;
      fVar9 = fVar9 + UVar10.fields.x;
    } while (DKLNFMKFLFJ != 0);
  }
  pUVar6 = (UnityEngine_RectTransform_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar6 == (UnityEngine_RectTransform_o *)0x0) {
    pUVar6 = (UnityEngine_RectTransform_o *)0x0;
  }
  else if (pUVar6->klass != UnityEngine_RectTransform_TypeInfo) {
    pUVar6 = (UnityEngine_RectTransform_o *)0x0;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar4) {
    return;
  }
  if (pUVar6 != (UnityEngine_RectTransform_o *)0x0) {
    UVar10.fields.y = fVar8;
    UVar10.fields.x = fVar9;
    UnityEngine_RectTransform__set_sizeDelta(pUVar6,UVar10,(MethodInfo *)0x0);
    return;
  }
LAB_0362eef0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

