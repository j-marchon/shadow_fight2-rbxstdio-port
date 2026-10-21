// TypeDefIndex 1210
// Namespace: Nekki.SF2.GUI.Pvp
// public class PlayersSelectTable : MonoBehaviour
// Fields:
//   private PlayerSelector _playerOne; // 0x20
//   private PlayerSelector _playerTwo; // 0x28
//   private Transform _cellContainer; // 0x30
//   private RectTransform DFAOPAGGKAG; // 0x38
//   private PlayersSelectTable.IINEHAAFAAM repeateMode; // 0x40
//   private int FLHKJAKLFPH; // 0x44
//   private int NNDFIMDGJLN; // 0x48
//   private int KGLMELJBHJL; // 0x4C
//   private Vector2 IFIDDDFLHCF; // 0x50

// ===== public void Init(int KEFILECBPMF, int BHOOMCEABGH, int KGLMELJBHJL)  [RVA 0x312D4D8]
// Nekki.SF2.GUI.Pvp.PlayersSelectTable$$Init @ RVA 0x312D4D8

void Nekki_SF2_GUI_Pvp_PlayersSelectTable__Init
               (Nekki_SF2_GUI_Pvp_PlayersSelectTable_o *__this,int32_t KEFILECBPMF,
               int32_t BHOOMCEABGH,int32_t KGLMELJBHJL,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  Nekki_SF2_GUI_Pvp_PlayerSelector_o *pNVar2;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_UI_GridLayoutGroup_o *__this_01;
  MethodInfo *method_00;
  UnityEngine_RectTransform_o **ppUVar3;
  UnityEngine_Vector2_o FDFANDCCJAG;
  UnityEngine_Rect_o UVar4;
  UnityEngine_Rect_o UVar5;
  
  method_00 = (MethodInfo *)(ulong)(uint)BHOOMCEABGH;
  if ((DAT_045666a1 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<GridLayoutGroup>__);
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<RectTransform>__);
    DAT_045666a1 = 1;
  }
  (__this->fields).FLHKJAKLFPH = KEFILECBPMF;
  (__this->fields).NNDFIMDGJLN = BHOOMCEABGH;
  (__this->fields).KGLMELJBHJL = KGLMELJBHJL;
  pUVar1 = (UnityEngine_RectTransform_o *)
           UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)__this,
                      Method_UnityEngine_Component_GetComponent<RectTransform>__);
  ppUVar3 = &(__this->fields).DFAOPAGGKAG;
  *ppUVar3 = pUVar1;
  thunk_FUN_01c20e04(ppUVar3,pUVar1);
  if (*ppUVar3 != (UnityEngine_RectTransform_o *)0x0) {
    UVar4 = UnityEngine_RectTransform__get_rect(*ppUVar3,(MethodInfo *)0x0);
    if (*ppUVar3 != (UnityEngine_RectTransform_o *)0x0) {
      UVar5 = UnityEngine_RectTransform__get_rect(*ppUVar3,(MethodInfo *)0x0);
      pNVar2 = (__this->fields)._playerOne;
      FDFANDCCJAG.fields.x = UVar4.fields.m_Width / (float)KEFILECBPMF;
      FDFANDCCJAG.fields.y = UVar5.fields.m_Height / (float)BHOOMCEABGH;
      (__this->fields).IFIDDDFLHCF.fields.x = FDFANDCCJAG.fields.x;
      (__this->fields).IFIDDDFLHCF.fields.y = FDFANDCCJAG.fields.y;
      if (pNVar2 != (Nekki_SF2_GUI_Pvp_PlayerSelector_o *)0x0) {
        Nekki_SF2_GUI_Pvp_PlayerSelector__SetSize(pNVar2,FDFANDCCJAG,(MethodInfo *)0x0);
        pNVar2 = (__this->fields)._playerTwo;
        if (pNVar2 != (Nekki_SF2_GUI_Pvp_PlayerSelector_o *)0x0) {
          Nekki_SF2_GUI_Pvp_PlayerSelector__SetSize
                    (pNVar2,(UnityEngine_Vector2_o)(__this->fields).IFIDDDFLHCF.fields,
                     (MethodInfo *)0x0);
          __this_00 = (__this->fields)._cellContainer;
          if ((__this_00 != (UnityEngine_Transform_o *)0x0) &&
             (__this_01 = (UnityEngine_UI_GridLayoutGroup_o *)
                          UnityEngine_Component__GetComponent<object>
                                    ((UnityEngine_Component_o *)__this_00,
                                     Method_UnityEngine_Component_GetComponent<GridLayoutGroup>__),
             __this_01 != (UnityEngine_UI_GridLayoutGroup_o *)0x0)) {
            UnityEngine_UI_GridLayoutGroup__set_cellSize
                      (__this_01,(UnityEngine_Vector2_o)(__this->fields).IFIDDDFLHCF.fields,
                       (MethodInfo *)0x0);
            Nekki_SF2_GUI_Pvp_PlayersSelectTable__ResetSelection(__this,0,method_00);
            Nekki_SF2_GUI_Pvp_PlayersSelectTable__ResetSelection(__this,1,method_00);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SetItem(GameObject IKKAMAMLIKA)  [RVA 0x312D68C]
// Nekki.SF2.GUI.Pvp.PlayersSelectTable$$SetItem @ RVA 0x312D68C

void Nekki_SF2_GUI_Pvp_PlayersSelectTable__SetItem
               (Nekki_SF2_GUI_Pvp_PlayersSelectTable_o *__this,UnityEngine_GameObject_o *IKKAMAMLIKA
               ,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  
  if ((IKKAMAMLIKA != (UnityEngine_GameObject_o *)0x0) &&
     (__this_00 = UnityEngine_GameObject__get_transform(IKKAMAMLIKA,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_Transform_o *)0x0)) {
    UnityEngine_Transform__SetParent
              (__this_00,(__this->fields)._cellContainer,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int GetSelectionID(AMJPDLOCCNP HEHMPFLAEGE)  [RVA 0x312D6C0]
// Nekki.SF2.GUI.Pvp.PlayersSelectTable$$GetSelectionID @ RVA 0x312D6C0

int32_t Nekki_SF2_GUI_Pvp_PlayersSelectTable__GetSelectionID
                  (Nekki_SF2_GUI_Pvp_PlayersSelectTable_o *__this,int32_t HEHMPFLAEGE,
                  MethodInfo *method)

{
  long lVar1;
  
  lVar1 = 0x20;
  if (HEHMPFLAEGE != 0) {
    lVar1 = 0x28;
  }
  lVar1 = *(long *)((long)&__this->klass + lVar1);
  if (lVar1 != 0) {
    return *(int *)(lVar1 + 0x40) + (__this->fields).FLHKJAKLFPH * *(int *)(lVar1 + 0x44);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SetSelection(AMJPDLOCCNP HEHMPFLAEGE, int KEFILECBPMF, int BHOOMCEABGH, float LFJGFLNMBMC = 0.1)  [RVA 0x312D6F4]
// Nekki.SF2.GUI.Pvp.PlayersSelectTable$$SetSelection @ RVA 0x312D6F4

void Nekki_SF2_GUI_Pvp_PlayersSelectTable__SetSelection
               (Nekki_SF2_GUI_Pvp_PlayersSelectTable_o *__this,int32_t HEHMPFLAEGE,
               int32_t KEFILECBPMF,int32_t BHOOMCEABGH,float LFJGFLNMBMC,MethodInfo *method)

{
  long lVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  System_Enum_o *pSVar7;
  System_Enum_o *pSVar8;
  Nekki_SF2_GUI_Pvp_PlayerSelector_o *__this_00;
  int iVar9;
  UnityEngine_Vector2_o BLEOKMIDGIK;
  undefined1 local_70 [4];
  uint8_t local_6c [4];
  undefined1 local_68 [4];
  uint8_t local_64 [4];
  undefined1 local_60 [4];
  uint8_t local_5c [4];
  undefined1 local_58 [4];
  uint8_t local_54 [4];
  
  if ((DAT_045666a2 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Pvp_PlayersSelectTable_IINEHAAFAAM_TypeInfo);
    DAT_045666a2 = 1;
  }
  local_54[0] = (__this->fields).repeateMode;
  lVar1 = 0x20;
  if (HEHMPFLAEGE != 0) {
    lVar1 = 0x28;
  }
  __this_00 = *(Nekki_SF2_GUI_Pvp_PlayerSelector_o **)((long)&__this->klass + lVar1);
  pSVar7 = (System_Enum_o *)
           thunk_FUN_01bda448(Nekki_SF2_GUI_Pvp_PlayersSelectTable_IINEHAAFAAM_TypeInfo,local_54);
  local_58[0] = 1;
  pSVar8 = (System_Enum_o *)
           thunk_FUN_01bda448(Nekki_SF2_GUI_Pvp_PlayersSelectTable_IINEHAAFAAM_TypeInfo,local_58);
  bVar4 = KEKFJNNBGJL__NFJIIGCLFOF(pSVar7,pSVar8,(MethodInfo *)0x0);
  if (bVar4) {
    if ((KEFILECBPMF < (__this->fields).FLHKJAKLFPH) && (-1 < KEFILECBPMF)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
  }
  else {
    bVar4 = false;
  }
  local_5c[0] = (__this->fields).repeateMode;
  pSVar7 = (System_Enum_o *)
           thunk_FUN_01bda448(Nekki_SF2_GUI_Pvp_PlayersSelectTable_IINEHAAFAAM_TypeInfo,local_5c);
  local_60[0] = 2;
  pSVar8 = (System_Enum_o *)
           thunk_FUN_01bda448(Nekki_SF2_GUI_Pvp_PlayersSelectTable_IINEHAAFAAM_TypeInfo,local_60);
  bVar5 = KEKFJNNBGJL__NFJIIGCLFOF(pSVar7,pSVar8,(MethodInfo *)0x0);
  if (bVar5) {
    if ((BHOOMCEABGH < (__this->fields).NNDFIMDGJLN) && (-1 < BHOOMCEABGH)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
  }
  else {
    bVar5 = false;
  }
  local_64[0] = (__this->fields).repeateMode;
  pSVar7 = (System_Enum_o *)
           thunk_FUN_01bda448(Nekki_SF2_GUI_Pvp_PlayersSelectTable_IINEHAAFAAM_TypeInfo,local_64);
  local_68[0] = 1;
  pSVar8 = (System_Enum_o *)
           thunk_FUN_01bda448(Nekki_SF2_GUI_Pvp_PlayersSelectTable_IINEHAAFAAM_TypeInfo,local_68);
  bVar6 = KEKFJNNBGJL__NFJIIGCLFOF(pSVar7,pSVar8,(MethodInfo *)0x0);
  iVar2 = (__this->fields).FLHKJAKLFPH;
  if (bVar6) {
    iVar9 = 0;
    if (iVar2 != 0) {
      iVar9 = (iVar2 + KEFILECBPMF) / iVar2;
    }
    iVar9 = (iVar2 + KEFILECBPMF) - iVar9 * iVar2;
  }
  else if (KEFILECBPMF < 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = iVar2 + -1;
    if (KEFILECBPMF <= iVar2 + -1) {
      iVar9 = KEFILECBPMF;
    }
  }
  local_6c[0] = (__this->fields).repeateMode;
  pSVar7 = (System_Enum_o *)
           thunk_FUN_01bda448(Nekki_SF2_GUI_Pvp_PlayersSelectTable_IINEHAAFAAM_TypeInfo,local_6c);
  local_70[0] = 2;
  pSVar8 = (System_Enum_o *)
           thunk_FUN_01bda448(Nekki_SF2_GUI_Pvp_PlayersSelectTable_IINEHAAFAAM_TypeInfo,local_70);
  bVar6 = KEKFJNNBGJL__NFJIIGCLFOF(pSVar7,pSVar8,(MethodInfo *)0x0);
  iVar2 = (__this->fields).NNDFIMDGJLN;
  if (bVar6) {
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = (iVar2 + BHOOMCEABGH) / iVar2;
    }
    iVar3 = (iVar2 + BHOOMCEABGH) - iVar3 * iVar2;
  }
  else if (BHOOMCEABGH < 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar2 + -1;
    if (BHOOMCEABGH <= iVar2 + -1) {
      iVar3 = BHOOMCEABGH;
    }
  }
  if (__this_00 != (Nekki_SF2_GUI_Pvp_PlayerSelector_o *)0x0) {
    BLEOKMIDGIK.fields.y = (__this->fields).IFIDDDFLHCF.fields.y * (float)-iVar3;
    BLEOKMIDGIK.fields.x = (__this->fields).IFIDDDFLHCF.fields.x * (float)iVar9;
    Nekki_SF2_GUI_Pvp_PlayerSelector__MoveTo
              (__this_00,iVar9,iVar3,BLEOKMIDGIK,LFJGFLNMBMC,bVar4,bVar5,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void MoveSelection(AMJPDLOCCNP HEHMPFLAEGE, int MKACJBMOMHC, int JJBKAMIAMNE, float LFJGFLNMBMC = 0.2)  [RVA 0x312D980]
// Nekki.SF2.GUI.Pvp.PlayersSelectTable$$MoveSelection @ RVA 0x312D980

void Nekki_SF2_GUI_Pvp_PlayersSelectTable__MoveSelection
               (Nekki_SF2_GUI_Pvp_PlayersSelectTable_o *__this,int32_t HEHMPFLAEGE,
               int32_t MKACJBMOMHC,int32_t JJBKAMIAMNE,float LFJGFLNMBMC,MethodInfo *method)

{
  long lVar1;
  
  lVar1 = 0x20;
  if (HEHMPFLAEGE != 0) {
    lVar1 = 0x28;
  }
  lVar1 = *(long *)((long)&__this->klass + lVar1);
  if (lVar1 != 0) {
    Nekki_SF2_GUI_Pvp_PlayersSelectTable__SetSelection
              (__this,HEHMPFLAEGE,*(int *)(lVar1 + 0x40) + MKACJBMOMHC,
               *(int *)(lVar1 + 0x44) + JJBKAMIAMNE,LFJGFLNMBMC,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ResetSelection(AMJPDLOCCNP HEHMPFLAEGE)  [RVA 0x312D60C]
// Nekki.SF2.GUI.Pvp.PlayersSelectTable$$ResetSelection @ RVA 0x312D60C

void Nekki_SF2_GUI_Pvp_PlayersSelectTable__ResetSelection
               (Nekki_SF2_GUI_Pvp_PlayersSelectTable_o *__this,int32_t HEHMPFLAEGE,
               MethodInfo *method)

{
  int iVar1;
  int iVar2;
  int iVar3;
  MethodInfo *in_x4;
  
  iVar1 = (__this->fields).KGLMELJBHJL;
  iVar2 = (__this->fields).FLHKJAKLFPH;
  if (DAT_0456033b == '\0') {
    FUN_01bab630(&System_Math_TypeInfo);
    DAT_0456033b = '\x01';
  }
  if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = iVar1 / iVar2;
  }
  Nekki_SF2_GUI_Pvp_PlayersSelectTable__SetSelection
            (__this,HEHMPFLAEGE,iVar1 - iVar3 * iVar2,(int)(float)iVar3,0.0,in_x4);
  return;
}


// ===== public void SelectCurrentItem(AMJPDLOCCNP HEHMPFLAEGE, bool IFNFDFALLMG)  [RVA 0x312D9B4]
// Nekki.SF2.GUI.Pvp.PlayersSelectTable$$SelectCurrentItem @ RVA 0x312D9B4

void Nekki_SF2_GUI_Pvp_PlayersSelectTable__SelectCurrentItem
               (Nekki_SF2_GUI_Pvp_PlayersSelectTable_o *__this,int32_t HEHMPFLAEGE,bool IFNFDFALLMG,
               MethodInfo *method)

{
  long lVar1;
  Nekki_SF2_GUI_Pvp_PlayerSelector_o *__this_00;
  
  lVar1 = 0x20;
  if (HEHMPFLAEGE != 0) {
    lVar1 = 0x28;
  }
  __this_00 = *(Nekki_SF2_GUI_Pvp_PlayerSelector_o **)((long)&__this->klass + lVar1);
  if (__this_00 != (Nekki_SF2_GUI_Pvp_PlayerSelector_o *)0x0) {
    Nekki_SF2_GUI_Pvp_PlayerSelector__SelectCurrentItem(__this_00,IFNFDFALLMG,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SetPlayerActive(AMJPDLOCCNP FKIGDGJPIAC, bool CACBHBLOGPA)  [RVA 0x312D9E4]
// Nekki.SF2.GUI.Pvp.PlayersSelectTable$$SetPlayerActive @ RVA 0x312D9E4

void Nekki_SF2_GUI_Pvp_PlayersSelectTable__SetPlayerActive
               (Nekki_SF2_GUI_Pvp_PlayersSelectTable_o *__this,int32_t FKIGDGJPIAC,bool CACBHBLOGPA,
               MethodInfo *method)

{
  Nekki_SF2_GUI_Pvp_PlayerSelector_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  MethodInfo *method_00;
  
  if (FKIGDGJPIAC == 0) {
    __this_00 = (__this->fields)._playerOne;
  }
  else {
    __this_00 = (__this->fields)._playerTwo;
  }
  if ((__this_00 != (Nekki_SF2_GUI_Pvp_PlayerSelector_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    method_00 = (MethodInfo *)0x0;
    UnityEngine_GameObject__SetActive(__this_01,CACBHBLOGPA,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Pvp_PlayersSelectTable__ResetSelection(__this,FKIGDGJPIAC,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Reset()  [RVA 0x312DA40]
// Nekki.SF2.GUI.Pvp.PlayersSelectTable$$Reset @ RVA 0x312DA40

void Nekki_SF2_GUI_Pvp_PlayersSelectTable__Reset
               (Nekki_SF2_GUI_Pvp_PlayersSelectTable_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Pvp_PlayerSelector_o *pNVar1;
  
  pNVar1 = (__this->fields)._playerOne;
  if (pNVar1 != (Nekki_SF2_GUI_Pvp_PlayerSelector_o *)0x0) {
    Nekki_SF2_GUI_Pvp_PlayerSelector__SelectCurrentItem(pNVar1,false,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._playerTwo;
    if (pNVar1 != (Nekki_SF2_GUI_Pvp_PlayerSelector_o *)0x0) {
      Nekki_SF2_GUI_Pvp_PlayerSelector__SelectCurrentItem(pNVar1,false,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Clear()  [RVA 0x312DA78]
// Nekki.SF2.GUI.Pvp.PlayersSelectTable$$Clear @ RVA 0x312DA78

/* WARNING: Removing unreachable block (ram,0x0322dc84) */

void Nekki_SF2_GUI_Pvp_PlayersSelectTable__Clear
               (Nekki_SF2_GUI_Pvp_PlayersSelectTable_o *__this,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  UnityEngine_Transform_o *__this_00;
  System_Collections_IEnumerator_o *pSVar4;
  VirtualInvokeData *pVVar5;
  UnityEngine_Component_o *__this_01;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  long *plVar6;
  undefined8 *puVar7;
  MethodInfo *extraout_x1;
  System_Collections_IEnumerator_c *pSVar8;
  long lVar9;
  ulong uVar10;
  int32_t *piVar11;
  int *piVar12;
  
  if ((DAT_045666a3 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&UnityEngine_Transform_TypeInfo);
    DAT_045666a3 = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields)._cellContainer;
  if (__this_00 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(0,method);
  }
  pSVar4 = UnityEngine_Transform__GetEnumerator(__this_00,(MethodInfo *)0x0);
  if (pSVar4 == (System_Collections_IEnumerator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    pSVar8 = pSVar4->klass;
    uVar2._0_1_ = (pSVar8->_2).rank;
    uVar2._1_1_ = (pSVar8->_2).minimumAlignment;
    uVar10 = (ulong)uVar2;
    if (uVar10 != 0) {
      piVar11 = &((pSVar8->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
          pVVar5 = pSVar8->vtable + *piVar11;
          goto LAB_0322db3c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pSVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_0322db3c:
    uVar10 = (*pVVar5->methodPtr)(pSVar4,pVVar5->method);
    if ((uVar10 & 1) == 0) {
      plVar6 = (long *)thunk_FUN_01bda71c(pSVar4,System_IDisposable_TypeInfo);
      if (plVar6 == (long *)0x0) {
        return;
      }
      lVar9 = *plVar6;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 == 0) goto LAB_0322dc38;
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    pSVar8 = pSVar4->klass;
    uVar3._0_1_ = (pSVar8->_2).rank;
    uVar3._1_1_ = (pSVar8->_2).minimumAlignment;
    uVar10 = (ulong)uVar3;
    if (uVar10 != 0) {
      piVar11 = &((pSVar8->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
          pVVar5 = pSVar8->vtable + (*piVar11 + 1);
          goto LAB_0322db9c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pSVar4,System_Collections_IEnumerator_TypeInfo,1);
LAB_0322db9c:
    __this_01 = (UnityEngine_Component_o *)(*pVVar5->methodPtr)(pSVar4,pVVar5->method);
    if (__this_01 == (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = (UnityEngine_Transform_TypeInfo->_2).naturalAligment;
    if (((__this_01->klass->_2).naturalAligment < bVar1) ||
       ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)UnityEngine_Transform_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64();
    }
    LAIGNDBNBJG = UnityEngine_Component__get_gameObject(__this_01,(MethodInfo *)0x0);
    Util__JODGPLBHHIA(LAIGNDBNBJG,false,(MethodInfo *)0x0);
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar12 = piVar12 + 4;
    if (uVar10 == 0) break;
    if (*(System_IDisposable_c **)(piVar12 + -2) == System_IDisposable_TypeInfo) {
      puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_0322dc54;
    }
  }
LAB_0322dc38:
  puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_IDisposable_TypeInfo,0);
LAB_0322dc54:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
  return;
}


// ===== public void .ctor()  [RVA 0x312DD48]
// Nekki.SF2.GUI.Pvp.PlayersSelectTable$$.ctor @ RVA 0x312DD48

void Nekki_SF2_GUI_Pvp_PlayersSelectTable___ctor
               (Nekki_SF2_GUI_Pvp_PlayersSelectTable_o *__this,MethodInfo *method)

{
  (__this->fields).FLHKJAKLFPH = 1;
  (__this->fields).NNDFIMDGJLN = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

