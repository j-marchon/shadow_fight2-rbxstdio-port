// TypeDefIndex 2369
// Namespace: Nekki.SF2.GUI.Fight
// public class ComboModel : SFMonoBehaviour<ComboModel.LNFENBCODDP>
// Fields:
//   private GameObject _comboItemPrefab; // 0x28
//   private GOJLGHMMDBO AMKECFKEGJH; // 0x30
//   private const float HCFKCPJNKEO = 40;
//   private const float GOGBCIPBFBC = 30;
//   private const float KBBBFOILGKG = 0;
//   private float PJINFMLCNGI; // 0x38
//   private float GDODLGBHLCD; // 0x3C
//   private Vector2 FHMKAKCKNAF; // 0x40
//   private Vector2 CKILNMCNMKA; // 0x48
//   private readonly Vector2 JOHMFEFNLPI; // 0x50
//   private List<ComboModel.IADNCANFNJH> EGHLGEIJLAM; // 0x58
//   private bool JBKPKLGIMOK; // 0x60
//   private int BGCKGKMOJJO; // 0x64
//   private int OJGEPLNIIDP; // 0x68
//   private int ENMLIMOGANA; // 0x6C
//   private int OPDLMLAODIG; // 0x70
//   private ScreenModel.GIGDGHANHFM NKKPNCHMEHC; // 0x74

// ===== public bool MoveTo(ComboItem ANGBPBINHBL, Vector2 PNAINFFCAJP, float DLFJMHJOMII)  [RVA 0x332BB2C]
// Nekki.SF2.GUI.Fight.ComboModel$$MoveTo @ RVA 0x332BB2C

bool Nekki_SF2_GUI_Fight_ComboModel__MoveTo
               (Nekki_SF2_GUI_Fight_ComboModel_o *__this,
               Nekki_SF2_GUI_Fight_ComboItem_o *ANGBPBINHBL,UnityEngine_Vector2_o PNAINFFCAJP,
               float DLFJMHJOMII,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  UnityEngine_Vector3_o UVar8;
  float local_4c;
  float local_48;
  
  if ((ANGBPBINHBL == (Nekki_SF2_GUI_Fight_ComboItem_o *)0x0) ||
     (pUVar1 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)ANGBPBINHBL,(MethodInfo *)0x0),
     pUVar1 == (UnityEngine_Transform_o *)0x0)) goto LAB_0342bc6c;
  UVar8 = UnityEngine_Transform__get_localPosition(pUVar1,(MethodInfo *)0x0);
  local_4c = UVar8.fields.y;
  local_48 = UVar8.fields.x;
  fVar7 = -PNAINFFCAJP.fields.x;
  if ((__this->fields).NKKPNCHMEHC != 1) {
    fVar7 = PNAINFFCAJP.fields.x;
  }
  fVar6 = PNAINFFCAJP.fields.y;
  fVar3 = fVar7 - local_48;
  fVar2 = DLFJMHJOMII;
  if (fVar6 <= local_4c) {
    fVar2 = -DLFJMHJOMII;
  }
  fVar4 = fVar6 - local_4c;
  if ((fVar3 == 0.0) || (NAN(fVar3))) {
    if ((fVar4 == 0.0) || (NAN(fVar4))) goto LAB_0342bc2c;
LAB_0342bbf0:
    fVar3 = fVar6 - local_4c;
    local_4c = local_4c + fVar2;
    if (ABS(fVar3) <= ABS(DLFJMHJOMII)) {
      local_4c = fVar6;
    }
  }
  else {
    fVar5 = DLFJMHJOMII;
    if (fVar7 <= local_48) {
      fVar5 = -DLFJMHJOMII;
    }
    local_48 = local_48 + fVar5;
    if (ABS(fVar3) <= ABS(DLFJMHJOMII)) {
      local_48 = fVar7;
    }
    if ((fVar4 != 0.0) && (!NAN(fVar4))) goto LAB_0342bbf0;
  }
  pUVar1 = UnityEngine_Component__get_transform
                     ((UnityEngine_Component_o *)ANGBPBINHBL,(MethodInfo *)0x0);
  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
    UVar8.fields.y = local_4c;
    UVar8.fields.x = local_48;
    UVar8.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition(pUVar1,UVar8,(MethodInfo *)0x0);
LAB_0342bc2c:
    return (local_48 - fVar7) * (local_48 - fVar7) + (local_4c - fVar6) * (local_4c - fVar6) <
           9.9999994e-11;
  }
LAB_0342bc6c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public GOJLGHMMDBO get_ComboStatistic()  [RVA 0x332BC70]
// Nekki.SF2.GUI.Fight.ComboModel$$get_ComboStatistic @ RVA 0x332BC70

GOJLGHMMDBO_o *
Nekki_SF2_GUI_Fight_ComboModel__get_ComboStatistic
          (Nekki_SF2_GUI_Fight_ComboModel_o *__this,MethodInfo *method)

{
  return (__this->fields).AMKECFKEGJH;
}


// ===== public ComboModel.IADNCANFNJH CreateComboStrike(int CJNHFNHJHPE)  [RVA 0x332BC78]
// Nekki.SF2.GUI.Fight.ComboModel$$CreateComboStrike @ RVA 0x332BC78

Nekki_SF2_GUI_Fight_ComboModel_IADNCANFNJH_o *
Nekki_SF2_GUI_Fight_ComboModel__CreateComboStrike
          (Nekki_SF2_GUI_Fight_ComboModel_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  Nekki_SF2_GUI_Fight_ComboItem_o *__this_00;
  Nekki_SF2_GUI_Fight_ComboModel_IADNCANFNJH_o *pNVar1;
  MethodInfo *method_00;
  
  __this_00 = Nekki_SF2_GUI_Fight_ComboModel__IPLAGLIIMNC(__this,3,method);
  if (__this_00 != (Nekki_SF2_GUI_Fight_ComboItem_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    Nekki_SF2_GUI_Fight_ComboItem__UpdateCount(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    pNVar1 = Nekki_SF2_GUI_Fight_ComboModel__CCLACGABBDP(__this,__this_00,method_00);
    return pNVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void RemoveAllCombo()  [RVA 0x332C070]
// Nekki.SF2.GUI.Fight.ComboModel$$RemoveAllCombo @ RVA 0x332C070

void Nekki_SF2_GUI_Fight_ComboModel__RemoveAllCombo
               (Nekki_SF2_GUI_Fight_ComboModel_o *__this,MethodInfo *method)

{
  int32_t length;
  bool bVar1;
  System_Collections_Generic_List_ComboModel_IADNCANFNJH__o *pSVar2;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_045678cb & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<ComboModel_IADNCANFNJH>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<ComboModel_IADNCANFNJH>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<ComboModel_IADNCANFNJH>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<ComboModel_IADNCANFNJH>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ComboModel_IADNCANFNJH>_GetEnumerator__);
    DAT_045678cb = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  pSVar2 = (__this->fields).EGHLGEIJLAM;
  if (pSVar2 != (System_Collections_Generic_List_ComboModel_IADNCANFNJH__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)pSVar2,
               Method_System_Collections_Generic_List<ComboModel_IADNCANFNJH>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<ComboModel_IADNCANFNJH>_MoveNext__
                        );
      if (!bVar1) break;
      if (local_38.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (local_38.fields._current[1].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)local_38.fields._current[1].klass,
                               (MethodInfo *)0x0);
      Util__JODGPLBHHIA(LAIGNDBNBJG,false,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_38,
               Method_System_Collections_Generic_List_Enumerator<ComboModel_IADNCANFNJH>_Dispose__);
    pSVar2 = (__this->fields).EGHLGEIJLAM;
    if (pSVar2 != (System_Collections_Generic_List_ComboModel_IADNCANFNJH__o *)0x0) {
      length = (pSVar2->fields)._size;
      (pSVar2->fields)._size = 0;
      (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private int JMMHIPLMPMG(MPNLBKPJPEI ACCIHBHMFPN, int LHLELGFDIAP = 0)  [RVA 0x332C204]
// Nekki.SF2.GUI.Fight.ComboModel$$JMMHIPLMPMG @ RVA 0x332C204

int32_t Nekki_SF2_GUI_Fight_ComboModel__JMMHIPLMPMG
                  (Nekki_SF2_GUI_Fight_ComboModel_o *__this,int32_t ACCIHBHMFPN,int32_t LHLELGFDIAP,
                  MethodInfo *method)

{
  int32_t iVar1;
  
  if ((DAT_045678cc & 1) == 0) {
    FUN_01bab630(&GameUtils_TypeInfo);
    DAT_045678cc = 1;
  }
  if (ACCIHBHMFPN == 3) {
    if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar1 = GameUtils__EOJFKNELJMG((MethodInfo *)0x0);
    return iVar1 + LHLELGFDIAP & (iVar1 + LHLELGFDIAP >> 0x1f ^ 0xffffffffU);
  }
  if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (ACCIHBHMFPN == 4) {
    iVar1 = GameUtils__ENEPBBBBAII((MethodInfo *)0x0);
    return iVar1;
  }
  iVar1 = GameUtils__GEFJDOMPJJH((MethodInfo *)0x0);
  return iVar1;
}


// ===== private void MFPOPOLAEHM()  [RVA 0x332C2A8]
// Nekki.SF2.GUI.Fight.ComboModel$$MFPOPOLAEHM @ RVA 0x332C2A8

void Nekki_SF2_GUI_Fight_ComboModel__MFPOPOLAEHM
               (Nekki_SF2_GUI_Fight_ComboModel_o *__this,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  Il2CppObject *pIVar3;
  bool bVar4;
  int32_t iVar5;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_List_ComboModel_IADNCANFNJH__o *pSVar6;
  Il2CppClass *pIVar7;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  System_Object_array *pSVar9;
  long in_d1;
  uint uVar10;
  UnityEngine_Rect_o UVar11;
  UnityEngine_Vector2_o PNAINFFCAJP;
  UnityEngine_Vector2_o PNAINFFCAJP_00;
  UnityEngine_Vector3_o UVar12;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_045678cd & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<ComboModel_IADNCANFNJH>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<ComboModel_IADNCANFNJH>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<ComboModel_IADNCANFNJH>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<ComboModel_IADNCANFNJH>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ComboModel_IADNCANFNJH>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ComboModel_IADNCANFNJH>_Remove__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ComboModel_IADNCANFNJH>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ComboModel_IADNCANFNJH>_TypeInfo);
    FUN_01bab630(&GameUtils_TypeInfo);
    DAT_045678cd = 1;
    method = extraout_x1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<ComboModel_IADNCANFNJH>_TypeInfo,
                                 method);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<ComboModel_IADNCANFNJH>__ctor__);
  pSVar6 = (__this->fields).EGHLGEIJLAM;
  if (pSVar6 != (System_Collections_Generic_List_ComboModel_IADNCANFNJH__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_98,(System_Collections_Generic_List_object__o *)pSVar6,
               Method_System_Collections_Generic_List<ComboModel_IADNCANFNJH>_GetEnumerator__);
    local_80.fields._index = local_98.fields._index;
    local_80.fields._version = local_98.fields._version;
    local_80.fields._list = local_98.fields._list;
    local_80.fields._current = local_98.fields._current;
LAB_0342c3d0:
    bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_80,
                       Method_System_Collections_Generic_List_Enumerator<ComboModel_IADNCANFNJH>_MoveNext__
                      );
    pIVar3 = local_80.fields._current;
    uVar10 = (uint)((ulong)in_d1 >> 0x20);
    if (bVar4) {
      if (local_80.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if ((*(char *)((long)&local_80.fields._current[1].monitor + 5) != '\0') ||
         ((__this->fields).JBKPKLGIMOK == false)) {
        iVar1 = *(int *)&local_80.fields._current[1].monitor;
        pIVar7 = local_80.fields._current[1].klass;
        *(undefined1 *)((long)&local_80.fields._current[1].monitor + 4) = 0;
        if (iVar1 < 1) {
          if (pIVar7 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pUVar8 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)pIVar7,(MethodInfo *)0x0);
          if (pUVar8 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          UVar12 = UnityEngine_Transform__get_localPosition(pUVar8,(MethodInfo *)0x0);
          PNAINFFCAJP_00.fields.y = UVar12.fields.y;
          if (pIVar3[1].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8(UVar12.fields.x,CONCAT44(uVar10,PNAINFFCAJP_00.fields.y),UVar12.fields.z);
          }
          __this_01 = Nekki_SF2_GUI_Fight_ComboItem__get_rectTransform
                                ((Nekki_SF2_GUI_Fight_ComboItem_o *)pIVar3[1].klass,
                                 (MethodInfo *)0x0);
          if (__this_01 == (UnityEngine_RectTransform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          UVar11 = UnityEngine_RectTransform__get_rect(__this_01,(MethodInfo *)0x0);
          PNAINFFCAJP_00.fields.x = -UVar11.fields.m_Width;
          in_d1 = (ulong)uVar10 << 0x20;
          bVar4 = Nekki_SF2_GUI_Fight_ComboModel__MoveTo
                            (__this,(Nekki_SF2_GUI_Fight_ComboItem_o *)pIVar3[1].klass,
                             PNAINFFCAJP_00,30.0,in_x2);
          lVar2 = Method_System_Collections_Generic_List<ComboModel_IADNCANFNJH>_Add__;
          if (bVar4) {
            if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar9 = (__this_00->fields)._items;
            (__this_00->fields)._version = (__this_00->fields)._version + 1;
            if (pSVar9 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            uVar10 = (__this_00->fields)._size;
            if (uVar10 < (uint)pSVar9->max_length) {
              (__this_00->fields)._size = uVar10 + 1;
              pSVar9->m_Items[(int)uVar10] = pIVar3;
              thunk_FUN_01c20e04(pSVar9->m_Items + (int)uVar10,pIVar3);
            }
            else {
              in_x2 = *(MethodInfo **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70);
              System_Collections_Generic_List<object>__AddWithResize
                        (__this_00,pIVar3,(MethodInfo_26E4DAC *)in_x2);
            }
          }
        }
        else {
          if (pIVar7 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pUVar8 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)pIVar7,(MethodInfo *)0x0);
          if (pUVar8 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          UVar12 = UnityEngine_Transform__get_localPosition(pUVar8,(MethodInfo *)0x0);
          PNAINFFCAJP.fields.y = UVar12.fields.y;
          PNAINFFCAJP.fields.x = (__this->fields).GDODLGBHLCD;
          in_d1 = (ulong)uVar10 << 0x20;
          bVar4 = Nekki_SF2_GUI_Fight_ComboModel__MoveTo
                            (__this,(Nekki_SF2_GUI_Fight_ComboItem_o *)pIVar3[1].klass,PNAINFFCAJP,
                             30.0,in_x2);
          if (bVar4) {
            if (*(int *)&pIVar3[2].klass == 4) {
              if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              iVar5 = GameUtils__PCJHAMFGJLP((MethodInfo *)0x0);
              if (iVar5 != 1) goto LAB_0342c3d0;
            }
            iVar1 = *(int *)&pIVar3[1].monitor;
            *(undefined1 *)((long)&pIVar3[1].monitor + 4) = 1;
            *(int *)&pIVar3[1].monitor = iVar1 + -1;
          }
        }
      }
      goto LAB_0342c3d0;
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_80,
               Method_System_Collections_Generic_List_Enumerator<ComboModel_IADNCANFNJH>_Dispose__);
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_98,__this_00,
                 Method_System_Collections_Generic_List<ComboModel_IADNCANFNJH>_GetEnumerator__);
      local_80.fields._index = local_98.fields._index;
      local_80.fields._version = local_98.fields._version;
      local_80.fields._list = local_98.fields._list;
      local_80.fields._current = local_98.fields._current;
      while( true ) {
        bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_80,
                           Method_System_Collections_Generic_List_Enumerator<ComboModel_IADNCANFNJH>_MoveNext__
                          );
        pIVar3 = local_80.fields._current;
        if (!bVar4) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_80,
                     Method_System_Collections_Generic_List_Enumerator<ComboModel_IADNCANFNJH>_Dispose__
                    );
          return;
        }
        pSVar6 = (__this->fields).EGHLGEIJLAM;
        if (pSVar6 == (System_Collections_Generic_List_ComboModel_IADNCANFNJH__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar4 = System_Collections_Generic_List<object>__Remove
                          ((System_Collections_Generic_List_object__o *)pSVar6,
                           local_80.fields._current,
                           Method_System_Collections_Generic_List<ComboModel_IADNCANFNJH>_Remove__);
        if (pIVar3 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8(bVar4);
        }
        pIVar7 = pIVar3[1].klass;
        if (pIVar7 == (Il2CppClass *)0x0) break;
        LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pIVar7,(MethodInfo *)0x0);
        Util__JODGPLBHHIA(LAIGNDBNBJG,false,(MethodInfo *)0x0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void set_ComboStatistic(GOJLGHMMDBO CJNHFNHJHPE)  [RVA 0x332C764]
// Nekki.SF2.GUI.Fight.ComboModel$$set_ComboStatistic @ RVA 0x332C764

void Nekki_SF2_GUI_Fight_ComboModel__set_ComboStatistic
               (Nekki_SF2_GUI_Fight_ComboModel_o *__this,GOJLGHMMDBO_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields).AMKECFKEGJH = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== private void ELAEKEBBFCI(EOLINGHAHFL ACCIHBHMFPN)  [RVA 0x332C76C]
// Nekki.SF2.GUI.Fight.ComboModel$$ELAEKEBBFCI @ RVA 0x332C76C

void Nekki_SF2_GUI_Fight_ComboModel__ELAEKEBBFCI
               (Nekki_SF2_GUI_Fight_ComboModel_o *__this,int32_t ACCIHBHMFPN,MethodInfo *method)

{
  Nekki_SF2_GUI_Fight_ComboModel_LNFENBCODDP_o *__this_00;
  
  if ((DAT_045678ce & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Fight_ComboModel_LNFENBCODDP_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_SFMonoBehaviour<ComboModel_LNFENBCODDP>_CallEvent__);
    DAT_045678ce = 1;
  }
  __this_00 = (Nekki_SF2_GUI_Fight_ComboModel_LNFENBCODDP_o *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Fight_ComboModel_LNFENBCODDP_TypeInfo);
  Nekki_SF2_GUI_Fight_ComboModel_LNFENBCODDP___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_GUI_Fight_ComboModel_LNFENBCODDP_o *)0x0) {
    (__this_00->fields).MDEJIIBDAIE = (__this->fields).ENMLIMOGANA;
    (__this_00->fields).BGHFADDGPAD = ACCIHBHMFPN;
    Nekki_SF2_GUI_SFMonoBehaviour<object>__CallEvent
              ((Nekki_SF2_GUI_SFMonoBehaviour_object__o *)__this,0,(Il2CppObject *)__this_00,
               Method_Nekki_SF2_GUI_SFMonoBehaviour<ComboModel_LNFENBCODDP>_CallEvent__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void OnFightPause(bool CJNHFNHJHPE)  [RVA 0x332C800]
// Nekki.SF2.GUI.Fight.ComboModel$$OnFightPause @ RVA 0x332C800

void Nekki_SF2_GUI_Fight_ComboModel__OnFightPause
               (Nekki_SF2_GUI_Fight_ComboModel_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).JBKPKLGIMOK = CJNHFNHJHPE;
  return;
}


// ===== public void UpdateCombo(int CJNHFNHJHPE, int LHLELGFDIAP)  [RVA 0x332C80C]
// Nekki.SF2.GUI.Fight.ComboModel$$UpdateCombo @ RVA 0x332C80C

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_Fight_ComboModel__UpdateCombo
               (Nekki_SF2_GUI_Fight_ComboModel_o *__this,int32_t CJNHFNHJHPE,int32_t LHLELGFDIAP,
               MethodInfo *method)

{
  int iVar1;
  int iVar2;
  int32_t iVar3;
  System_Predicate_ComboModel_IADNCANFNJH__o **ppSVar4;
  Nekki_SF2_GUI_Fight_ComboModel_o *pNVar5;
  Nekki_SF2_GUI_Fight_ComboModel_o *__this_00;
  MethodInfo *pMVar6;
  Nekki_SF2_GUI_Fight_ComboItem_o *__this_01;
  GOJLGHMMDBO_o *pGVar7;
  System_Collections_Generic_List_ComboModel_IADNCANFNJH__o *__this_02;
  System_Predicate_ComboModel_IADNCANFNJH__o *match;
  
  if ((DAT_045678cf & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ComboModel_IADNCANFNJH>_Find__);
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&System_Predicate<ComboModel_IADNCANFNJH>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_ComboModel_<>c_PEAJCEEDOIA__);
    FUN_01bab630(&Nekki_SF2_GUI_Fight_ComboModel_<>c_TypeInfo);
    DAT_045678cf = 1;
  }
  (__this->fields).ENMLIMOGANA = CJNHFNHJHPE;
  if (0 < CJNHFNHJHPE) {
    (__this->fields).BGCKGKMOJJO = 0;
  }
  if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  iVar3 = GameUtils__BHIHCKDOJKB((MethodInfo *)0x0);
  if (CJNHFNHJHPE < iVar3) {
    return;
  }
  __this_02 = (__this->fields).EGHLGEIJLAM;
  if ((Nekki_SF2_GUI_Fight_ComboModel_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  match = Nekki_SF2_GUI_Fight_ComboModel_<>c_TypeInfo->static_fields->__9__38_0;
  if (match == (System_Predicate_ComboModel_IADNCANFNJH__o *)0x0) {
    if ((Nekki_SF2_GUI_Fight_ComboModel_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    match = (System_Predicate_ComboModel_IADNCANFNJH__o *)
            thunk_FUN_01bda818(System_Predicate<ComboModel_IADNCANFNJH>_TypeInfo);
    method = (MethodInfo *)0x0;
    System_Predicate<object>___ctor();
    ppSVar4 = &Nekki_SF2_GUI_Fight_ComboModel_<>c_TypeInfo->static_fields->__9__38_0;
    *ppSVar4 = match;
    thunk_FUN_01c20e04(ppSVar4,match);
  }
  if (__this_02 != (System_Collections_Generic_List_ComboModel_IADNCANFNJH__o *)0x0) {
    pMVar6 = Method_System_Collections_Generic_List<ComboModel_IADNCANFNJH>_Find__;
    pNVar5 = (Nekki_SF2_GUI_Fight_ComboModel_o *)
             System_Collections_Generic_List<object>__Find
                       ((System_Collections_Generic_List_object__o *)__this_02,
                        (System_Predicate_T__o *)match,
                        (MethodInfo_26E5414 *)
                        Method_System_Collections_Generic_List<ComboModel_IADNCANFNJH>_Find__);
    __this_00 = pNVar5;
    if (pNVar5 == (Nekki_SF2_GUI_Fight_ComboModel_o *)0x0) {
      __this_00 = (Nekki_SF2_GUI_Fight_ComboModel_o *)
                  Nekki_SF2_GUI_Fight_ComboModel__CreateComboStrike
                            (__this,(__this->fields).ENMLIMOGANA,pMVar6);
    }
    if (__this_00 != (Nekki_SF2_GUI_Fight_ComboModel_o *)0x0) {
      iVar3 = Nekki_SF2_GUI_Fight_ComboModel__JMMHIPLMPMG
                        (__this_00,*(int32_t *)&(__this_00->fields).super.EKFFCOAOHBD,LHLELGFDIAP,
                         method);
      __this_01 = (Nekki_SF2_GUI_Fight_ComboItem_o *)
                  (__this_00->fields).super.super.super.super.super.m_CachedPtr;
      *(int32_t *)&(__this_00->fields).super.super.m_CancellationTokenSource = iVar3;
      if (__this_01 != (Nekki_SF2_GUI_Fight_ComboItem_o *)0x0) {
        pMVar6 = (MethodInfo *)0x0;
        Nekki_SF2_GUI_Fight_ComboItem__UpdateCount
                  (__this_01,(__this->fields).ENMLIMOGANA,(MethodInfo *)0x0);
        pGVar7 = (__this->fields).AMKECFKEGJH;
        if (pGVar7 != (GOJLGHMMDBO_o *)0x0) {
          iVar1 = (pGVar7->fields).OODAOEGNBGP;
          iVar2 = (__this->fields).ENMLIMOGANA;
          if (iVar1 <= iVar2) {
            iVar1 = iVar2;
          }
          (pGVar7->fields).OODAOEGNBGP = iVar1;
          Nekki_SF2_GUI_Fight_ComboModel__ELAEKEBBFCI
                    (__this,(uint)(pNVar5 != (Nekki_SF2_GUI_Fight_ComboModel_o *)0x0),pMVar6);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void ELOPIECONBH()  [RVA 0x332C9EC]
// Nekki.SF2.GUI.Fight.ComboModel$$ELOPIECONBH @ RVA 0x332C9EC

void Nekki_SF2_GUI_Fight_ComboModel__ELOPIECONBH
               (Nekki_SF2_GUI_Fight_ComboModel_o *__this,MethodInfo *method)

{
  float fVar1;
  Il2CppObject *pIVar2;
  bool bVar3;
  System_Collections_Generic_List_ComboModel_IADNCANFNJH__o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  float fVar4;
  float fVar5;
  UnityEngine_Rect_o UVar6;
  UnityEngine_Vector2_o UVar7;
  UnityEngine_Vector2_o UVar8;
  UnityEngine_Vector3_o UVar9;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_045678d0 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<ComboModel_IADNCANFNJH>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<ComboModel_IADNCANFNJH>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<ComboModel_IADNCANFNJH>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<ComboModel_IADNCANFNJH>_GetEnumerator__);
    DAT_045678d0 = 1;
    method = extraout_x1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).EGHLGEIJLAM;
  if (__this_00 == (System_Collections_Generic_List_ComboModel_IADNCANFNJH__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(0,method);
  }
  fVar5 = (__this->fields).JOHMFEFNLPI.fields.y;
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_88,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<ComboModel_IADNCANFNJH>_GetEnumerator__);
  local_70.fields._index = local_88.fields._index;
  local_70.fields._version = local_88.fields._version;
  local_70.fields._list = local_88.fields._list;
  local_70.fields._current = local_88.fields._current;
  while( true ) {
    bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_70,
                       Method_System_Collections_Generic_List_Enumerator<ComboModel_IADNCANFNJH>_MoveNext__
                      );
    pIVar2 = local_70.fields._current;
    if (!bVar3) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_70,
                 Method_System_Collections_Generic_List_Enumerator<ComboModel_IADNCANFNJH>_Dispose__
                );
      return;
    }
    if (local_70.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (local_70.fields._current[1].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_01 = Nekki_SF2_GUI_Fight_ComboItem__get_rectTransform
                          ((Nekki_SF2_GUI_Fight_ComboItem_o *)local_70.fields._current[1].klass,
                           (MethodInfo *)0x0);
    if (__this_01 == (UnityEngine_RectTransform_o *)0x0) break;
    UVar9 = UnityEngine_Transform__get_localPosition
                      ((UnityEngine_Transform_o *)__this_01,(MethodInfo *)0x0);
    UVar8.fields.x = UVar9.fields.x;
    if (*(char *)((long)&pIVar2[1].monitor + 4) == '\0') {
      UVar9 = UnityEngine_Transform__get_localPosition
                        ((UnityEngine_Transform_o *)__this_01,(MethodInfo *)0x0);
      fVar5 = UVar9.fields.y;
      UVar6 = UnityEngine_RectTransform__get_rect(__this_01,(MethodInfo *)0x0);
      fVar4 = UVar6.fields.m_Height;
      UVar8 = UnityEngine_RectTransform__get_pivot(__this_01,(MethodInfo *)0x0);
      fVar1 = UVar8.fields.y;
    }
    else {
      if (fVar5 != 0.0) {
        UVar6 = UnityEngine_RectTransform__get_rect(__this_01,(MethodInfo *)0x0);
        UVar7 = UnityEngine_RectTransform__get_pivot(__this_01,(MethodInfo *)0x0);
        fVar5 = fVar5 - UVar6.fields.m_Height * UVar7.fields.y;
      }
      UVar8.fields.y = fVar5;
      Nekki_SF2_GUI_Fight_ComboModel__MoveTo
                (__this,(Nekki_SF2_GUI_Fight_ComboItem_o *)pIVar2[1].klass,UVar8,0.0,in_x2);
      UVar6 = UnityEngine_RectTransform__get_rect(__this_01,(MethodInfo *)0x0);
      fVar4 = UVar6.fields.m_Height;
      UVar8 = UnityEngine_RectTransform__get_pivot(__this_01,(MethodInfo *)0x0);
      fVar1 = UVar8.fields.y;
    }
    fVar5 = (fVar5 - fVar4 * fVar1) + -40.0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public ComboModel.IADNCANFNJH CreateHeadStrike()  [RVA 0x332CC5C]
// Nekki.SF2.GUI.Fight.ComboModel$$CreateHeadStrike @ RVA 0x332CC5C

Nekki_SF2_GUI_Fight_ComboModel_IADNCANFNJH_o *
Nekki_SF2_GUI_Fight_ComboModel__CreateHeadStrike
          (Nekki_SF2_GUI_Fight_ComboModel_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Fight_ComboItem_o *ANGBPBINHBL;
  Nekki_SF2_GUI_Fight_ComboModel_IADNCANFNJH_o *pNVar1;
  MethodInfo *in_x2;
  GOJLGHMMDBO_o *pGVar2;
  
  pGVar2 = (__this->fields).AMKECFKEGJH;
  if (pGVar2 != (GOJLGHMMDBO_o *)0x0) {
    (pGVar2->fields).IHOCNJJDMEB = (pGVar2->fields).IHOCNJJDMEB + 1;
    ANGBPBINHBL = Nekki_SF2_GUI_Fight_ComboModel__IPLAGLIIMNC(__this,1,in_x2);
    pNVar1 = Nekki_SF2_GUI_Fight_ComboModel__CCLACGABBDP(__this,ANGBPBINHBL,in_x2);
    return pNVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private bool FNDFCAGADGJ(ComboModel.IADNCANFNJH AHDGNOJPPIB)  [RVA 0x332C734]
// Nekki.SF2.GUI.Fight.ComboModel$$FNDFCAGADGJ @ RVA 0x332C734

bool Nekki_SF2_GUI_Fight_ComboModel__FNDFCAGADGJ
               (Nekki_SF2_GUI_Fight_ComboModel_o *__this,
               Nekki_SF2_GUI_Fight_ComboModel_IADNCANFNJH_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  
  if (AHDGNOJPPIB != (Nekki_SF2_GUI_Fight_ComboModel_IADNCANFNJH_o *)0x0) {
    if ((AHDGNOJPPIB->fields).IPPKJMDIGKJ == false) {
      bVar1 = (__this->fields).JBKPKLGIMOK == false;
    }
    else {
      bVar1 = true;
    }
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x332CC94]
// Nekki.SF2.GUI.Fight.ComboModel$$.ctor @ RVA 0x332CC94

void Nekki_SF2_GUI_Fight_ComboModel___ctor
               (Nekki_SF2_GUI_Fight_ComboModel_o *__this,MethodInfo *method)

{
  GOJLGHMMDBO_o *__this_00;
  GOJLGHMMDBO_o **ppGVar1;
  System_Collections_Generic_List_ComboModel_IADNCANFNJH__o *__this_01;
  System_Collections_Generic_List_ComboModel_IADNCANFNJH__o **ppSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_045678d1 & 1) == 0) {
    FUN_01bab630(&GOJLGHMMDBO_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ComboModel_IADNCANFNJH>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ComboModel_IADNCANFNJH>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_SFMonoBehaviour<ComboModel_LNFENBCODDP>__ctor__);
    DAT_045678d1 = 1;
    method = extraout_x1;
  }
  __this_00 = (GOJLGHMMDBO_o *)thunk_FUN_01bda818(GOJLGHMMDBO_TypeInfo,method);
  GOJLGHMMDBO___ctor(__this_00,(MethodInfo *)0x0);
  ppGVar1 = &(__this->fields).AMKECFKEGJH;
  *ppGVar1 = __this_00;
  thunk_FUN_01c20e04(ppGVar1,__this_00);
  (__this->fields).PJINFMLCNGI = 600.0;
  (__this->fields).GDODLGBHLCD = 245.0;
  (__this->fields).JOHMFEFNLPI.fields = (UnityEngine_Vector2_Fields)0xc220000000000000;
  __this_01 = (System_Collections_Generic_List_ComboModel_IADNCANFNJH__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<ComboModel_IADNCANFNJH>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<ComboModel_IADNCANFNJH>__ctor__);
  ppSVar2 = &(__this->fields).EGHLGEIJLAM;
  *ppSVar2 = __this_01;
  thunk_FUN_01c20e04(ppSVar2,__this_01);
  Nekki_SF2_GUI_SFMonoBehaviour<object>___ctor
            ((Nekki_SF2_GUI_SFMonoBehaviour_object__o *)__this,
             Method_Nekki_SF2_GUI_SFMonoBehaviour<ComboModel_LNFENBCODDP>__ctor__);
  return;
}


// ===== public void ResetComboStrike()  [RVA 0x332CD88]
// Nekki.SF2.GUI.Fight.ComboModel$$ResetComboStrike @ RVA 0x332CD88

void Nekki_SF2_GUI_Fight_ComboModel__ResetComboStrike
               (Nekki_SF2_GUI_Fight_ComboModel_o *__this,MethodInfo *method)

{
  (__this->fields).ENMLIMOGANA = 0;
  return;
}


// ===== public void AddCrazyStyle(int CJNHFNHJHPE)  [RVA 0x332CD90]
// Nekki.SF2.GUI.Fight.ComboModel$$AddCrazyStyle @ RVA 0x332CD90

void Nekki_SF2_GUI_Fight_ComboModel__AddCrazyStyle
               (Nekki_SF2_GUI_Fight_ComboModel_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  int iVar1;
  System_String_o *pSVar2;
  GOJLGHMMDBO_o *__this_00;
  System_String_o **ppSVar3;
  
  __this_00 = (__this->fields).AMKECFKEGJH;
  if (__this_00 != (GOJLGHMMDBO_o *)0x0) {
    iVar1 = (__this_00->fields).DIMGKENDINF;
    if (iVar1 <= CJNHFNHJHPE) {
      iVar1 = CJNHFNHJHPE;
    }
    (__this_00->fields).DIMGKENDINF = iVar1;
    pSVar2 = GOJLGHMMDBO__ALJPINHKMFK(__this_00,(MethodInfo *)0x0);
    ppSVar3 = &(__this_00->fields).IMHCBMGEIDH;
    *ppSVar3 = pSVar2;
    thunk_FUN_01c20e04(ppSVar3,pSVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Init(ScreenModel.GIGDGHANHFM GCIBBBDPBNK)  [RVA 0x332CDD0]
// Nekki.SF2.GUI.Fight.ComboModel$$Init @ RVA 0x332CDD0

void Nekki_SF2_GUI_Fight_ComboModel__Init
               (Nekki_SF2_GUI_Fight_ComboModel_o *__this,int32_t GCIBBBDPBNK,MethodInfo *method)

{
  int32_t iVar1;
  MethodInfo *in_x3;
  float fVar2;
  
  (__this->fields).NKKPNCHMEHC = GCIBBBDPBNK;
  iVar1 = Nekki_SF2_GUI_Fight_ComboModel__JMMHIPLMPMG(__this,3,0,in_x3);
  (__this->fields).OJGEPLNIIDP = iVar1;
  if ((__this->fields).NKKPNCHMEHC == 0) {
    (__this->fields).PJINFMLCNGI = -(__this->fields).PJINFMLCNGI;
    fVar2 = 0.0;
  }
  else {
                    /* try { // try from 0342cdf4 to 0352cedf has its CatchHandler @ 0342cdf4
                       catch() { ... } // from try @ 0342cdf4 with catch @ 0342cdf4
                       catch() { ... } // from try @ 0342cf1c with catch @ 0342cdf4
                       catch() { ... } // from try @ 0342cf4c with catch @ 0342cdf4
                       catch() { ... } // from try @ 0342cf7c with catch @ 0342cdf4
                       catch() { ... } // from try @ 0342cfbc with catch @ 0342cdf4 */
    fVar2 = 1.0;
  }
  (__this->fields).FHMKAKCKNAF.fields.x = fVar2;
  (__this->fields).FHMKAKCKNAF.fields.y = 0.5;
  (__this->fields).CKILNMCNMKA.fields.x = fVar2;
  (__this->fields).CKILNMCNMKA.fields.y = 0.5;
  return;
}


// ===== private ComboItem IPLAGLIIMNC(MPNLBKPJPEI ACCIHBHMFPN)  [RVA 0x332BCBC]
// Nekki.SF2.GUI.Fight.ComboModel$$IPLAGLIIMNC @ RVA 0x332BCBC

Nekki_SF2_GUI_Fight_ComboItem_o *
Nekki_SF2_GUI_Fight_ComboModel__IPLAGLIIMNC
          (Nekki_SF2_GUI_Fight_ComboModel_o *__this,int32_t ACCIHBHMFPN,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *x;
  Nekki_SF2_GUI_Fight_ComboItem_o *__this_00;
  UnityEngine_GameObject_o *pUVar2;
  
  if ((DAT_045678d2 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<ComboItem>__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045678d2 = 1;
  }
  x = (UnityEngine_Object_o *)(__this->fields)._comboItemPrefab;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  __this_00 = (Nekki_SF2_GUI_Fight_ComboItem_o *)0x0;
  if (!bVar1) {
    pUVar2 = (__this->fields)._comboItemPrefab;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pUVar2 = (UnityEngine_GameObject_o *)
             UnityEngine_Object__Instantiate<object>
                       ((Il2CppObject *)pUVar2,Method_UnityEngine_Object_Instantiate<GameObject>__);
    if ((pUVar2 == (UnityEngine_GameObject_o *)0x0) ||
       (__this_00 = (Nekki_SF2_GUI_Fight_ComboItem_o *)
                    UnityEngine_GameObject__GetComponent<object>
                              (pUVar2,Method_UnityEngine_GameObject_GetComponent<ComboItem>__),
       __this_00 == (Nekki_SF2_GUI_Fight_ComboItem_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Nekki_SF2_GUI_Fight_ComboItem__Init
              (__this_00,ACCIHBHMFPN,(__this->fields).NKKPNCHMEHC,(MethodInfo *)0x0);
  }
  return __this_00;
}


// ===== public ComboModel.IADNCANFNJH CreateHotGroundTimer(int CJNHFNHJHPE)  [RVA 0x332CE1C]
// Nekki.SF2.GUI.Fight.ComboModel$$CreateHotGroundTimer @ RVA 0x332CE1C

Nekki_SF2_GUI_Fight_ComboModel_IADNCANFNJH_o *
Nekki_SF2_GUI_Fight_ComboModel__CreateHotGroundTimer
          (Nekki_SF2_GUI_Fight_ComboModel_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  Nekki_SF2_GUI_Fight_ComboItem_o *__this_00;
  Nekki_SF2_GUI_Fight_ComboModel_IADNCANFNJH_o *pNVar1;
  MethodInfo *method_00;
  
  __this_00 = Nekki_SF2_GUI_Fight_ComboModel__IPLAGLIIMNC(__this,4,method);
  if (__this_00 != (Nekki_SF2_GUI_Fight_ComboItem_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    Nekki_SF2_GUI_Fight_ComboItem__UpdateCount(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    pNVar1 = Nekki_SF2_GUI_Fight_ComboModel__CCLACGABBDP(__this,__this_00,method_00);
    return pNVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public ComboModel.IADNCANFNJH CreateShock()  [RVA 0x332CE60]
// Nekki.SF2.GUI.Fight.ComboModel$$CreateShock @ RVA 0x332CE60

Nekki_SF2_GUI_Fight_ComboModel_IADNCANFNJH_o *
Nekki_SF2_GUI_Fight_ComboModel__CreateShock
          (Nekki_SF2_GUI_Fight_ComboModel_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Fight_ComboItem_o *ANGBPBINHBL;
  Nekki_SF2_GUI_Fight_ComboModel_IADNCANFNJH_o *pNVar1;
  MethodInfo *in_x2;
  GOJLGHMMDBO_o *pGVar2;
  
  pGVar2 = (__this->fields).AMKECFKEGJH;
  if (pGVar2 != (GOJLGHMMDBO_o *)0x0) {
    (pGVar2->fields).PJIABIIHIFD = (pGVar2->fields).PJIABIIHIFD + 1;
    ANGBPBINHBL = Nekki_SF2_GUI_Fight_ComboModel__IPLAGLIIMNC(__this,5,in_x2);
    pNVar1 = Nekki_SF2_GUI_Fight_ComboModel__CCLACGABBDP(__this,ANGBPBINHBL,in_x2);
    return pNVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public ComboModel.IADNCANFNJH CreateCritical()  [RVA 0x332CE98]
// Nekki.SF2.GUI.Fight.ComboModel$$CreateCritical @ RVA 0x332CE98

Nekki_SF2_GUI_Fight_ComboModel_IADNCANFNJH_o *
Nekki_SF2_GUI_Fight_ComboModel__CreateCritical
          (Nekki_SF2_GUI_Fight_ComboModel_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Fight_ComboItem_o *ANGBPBINHBL;
  Nekki_SF2_GUI_Fight_ComboModel_IADNCANFNJH_o *pNVar1;
  MethodInfo *in_x2;
  GOJLGHMMDBO_o *pGVar2;
  
  pGVar2 = (__this->fields).AMKECFKEGJH;
  if (pGVar2 != (GOJLGHMMDBO_o *)0x0) {
    (pGVar2->fields).EHIIBHBCHHH = (pGVar2->fields).EHIIBHBCHHH + 1;
    ANGBPBINHBL = Nekki_SF2_GUI_Fight_ComboModel__IPLAGLIIMNC(__this,2,in_x2);
    pNVar1 = Nekki_SF2_GUI_Fight_ComboModel__CCLACGABBDP(__this,ANGBPBINHBL,in_x2);
    return pNVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public ComboModel.IADNCANFNJH CreateFirstStrike()  [RVA 0x332CED0]
// Nekki.SF2.GUI.Fight.ComboModel$$CreateFirstStrike @ RVA 0x332CED0

Nekki_SF2_GUI_Fight_ComboModel_IADNCANFNJH_o *
Nekki_SF2_GUI_Fight_ComboModel__CreateFirstStrike
          (Nekki_SF2_GUI_Fight_ComboModel_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Fight_ComboItem_o *ANGBPBINHBL;
  Nekki_SF2_GUI_Fight_ComboModel_IADNCANFNJH_o *pNVar1;
  MethodInfo *in_x2;
  GOJLGHMMDBO_o *pGVar2;
  
  pGVar2 = (__this->fields).AMKECFKEGJH;
  if (pGVar2 != (GOJLGHMMDBO_o *)0x0) {
                    /* try { // try from 0342cee0 to 0352cee7 has its CatchHandler @ 0342cf60 */
    (pGVar2->fields).GNGEACPLJAG = (pGVar2->fields).GNGEACPLJAG + 1;
    ANGBPBINHBL = Nekki_SF2_GUI_Fight_ComboModel__IPLAGLIIMNC(__this,0,in_x2);
                    /* try { // try from 0342cef4 to 0352cf0b has its CatchHandler @ 0342cf58 */
    pNVar1 = Nekki_SF2_GUI_Fight_ComboModel__CCLACGABBDP(__this,ANGBPBINHBL,in_x2);
    return pNVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void UpdateHotGroundTimer(int LFJGFLNMBMC)  [RVA 0x332CF08]
// Nekki.SF2.GUI.Fight.ComboModel$$UpdateHotGroundTimer @ RVA 0x332CF08

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_Fight_ComboModel__UpdateHotGroundTimer
               (Nekki_SF2_GUI_Fight_ComboModel_o *__this,int32_t LFJGFLNMBMC,MethodInfo *method)

{
  int32_t iVar1;
  System_Predicate_ComboModel_IADNCANFNJH__o **ppSVar2;
  Nekki_SF2_GUI_Fight_ComboModel_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *in_x3;
  Nekki_SF2_GUI_Fight_ComboItem_o *__this_01;
  System_Collections_Generic_List_ComboModel_IADNCANFNJH__o *__this_02;
  System_Predicate_ComboModel_IADNCANFNJH__o *match;
  
                    /* try { // try from 0342cf14 to 0352cf1b has its CatchHandler @ 0342cf5c */
                    /* try { // try from 0342cf1c to 0352cf43 has its CatchHandler @ 0342cdf4 */
  if ((DAT_045678d3 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ComboModel_IADNCANFNJH>_Find__);
                    /* try { // try from 0342cf44 to 0352cf47 has its CatchHandler @ 0342cf54 */
    FUN_01bab630(&System_Predicate<ComboModel_IADNCANFNJH>_TypeInfo);
                    /* try { // try from 0342cf48 to 0352cf4b has its CatchHandler @ 0342cf50 */
                    /* try { // try from 0342cf4c to 0352cf77 has its CatchHandler @ 0342cdf4 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0342cf48 with catch @ 0342cf50
                        */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_ComboModel_<>c_OGCNHABBHKM__);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0342cf44 with catch @ 0342cf54
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0342cef4 with catch @ 0342cf58
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0342cf14 with catch @ 0342cf5c
                        */
    FUN_01bab630(&Nekki_SF2_GUI_Fight_ComboModel_<>c_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0342cee0 with catch @ 0342cf60
                        */
    DAT_045678d3 = 1;
  }
  (__this->fields).OPDLMLAODIG = LFJGFLNMBMC;
  __this_02 = (__this->fields).EGHLGEIJLAM;
                    /* try { // try from 0342cf78 to 0352cf7b has its CatchHandler @ 0342cfa4 */
  if ((Nekki_SF2_GUI_Fight_ComboModel_<>c_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0342cf7c to 0352cfb3 has its CatchHandler @ 0342cdf4 */
    thunk_FUN_01ba7564();
  }
  match = Nekki_SF2_GUI_Fight_ComboModel_<>c_TypeInfo->static_fields->__9__36_0;
  if (match == (System_Predicate_ComboModel_IADNCANFNJH__o *)0x0) {
    if ((Nekki_SF2_GUI_Fight_ComboModel_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* catch() { ... } // from try @ 0342cf78 with catch @ 0342cfa4 */
                    /* try { // try from 0342cfb4 to 0352cfbb has its CatchHandler @ 0342cfd0 */
    match = (System_Predicate_ComboModel_IADNCANFNJH__o *)
            thunk_FUN_01bda818(System_Predicate<ComboModel_IADNCANFNJH>_TypeInfo);
                    /* try { // try from 0342cfbc to 0352cfc7 has its CatchHandler @ 0342cdf4 */
    in_x3 = (MethodInfo *)0x0;
                    /* try { // try from 0342cfc8 to 0352cfcf has its CatchHandler @ 0342cfd0 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0342cfb4 with catch @ 0342cfd0
                       catch(type#2 @ 00000000) { ... } // from try @ 0342cfc8 with catch @ 0342cfd0
                        */
    System_Predicate<object>___ctor();
                    /* try { // try from 0342cfd4 to 0352d0cb has its CatchHandler @ 0342cfd4
                       catch() { ... } // from try @ 0342cfd4 with catch @ 0342cfd4
                       catch() { ... } // from try @ 0342d154 with catch @ 0342cfd4
                       catch() { ... } // from try @ 0342d18c with catch @ 0342cfd4
                       catch() { ... } // from try @ 0342d1bc with catch @ 0342cfd4
                       catch() { ... } // from try @ 0342d1ec with catch @ 0342cfd4 */
    ppSVar2 = &Nekki_SF2_GUI_Fight_ComboModel_<>c_TypeInfo->static_fields->__9__36_0;
    *ppSVar2 = match;
    thunk_FUN_01c20e04(ppSVar2,match);
  }
  if (__this_02 != (System_Collections_Generic_List_ComboModel_IADNCANFNJH__o *)0x0) {
    method_00 = Method_System_Collections_Generic_List<ComboModel_IADNCANFNJH>_Find__;
    __this_00 = (Nekki_SF2_GUI_Fight_ComboModel_o *)
                System_Collections_Generic_List<object>__Find
                          ((System_Collections_Generic_List_object__o *)__this_02,
                           (System_Predicate_T__o *)match,
                           (MethodInfo_26E5414 *)
                           Method_System_Collections_Generic_List<ComboModel_IADNCANFNJH>_Find__);
    if (__this_00 == (Nekki_SF2_GUI_Fight_ComboModel_o *)0x0) {
      __this_00 = (Nekki_SF2_GUI_Fight_ComboModel_o *)
                  Nekki_SF2_GUI_Fight_ComboModel__CreateHotGroundTimer
                            (__this,(__this->fields).OPDLMLAODIG,method_00);
    }
    if (__this_00 != (Nekki_SF2_GUI_Fight_ComboModel_o *)0x0) {
      iVar1 = Nekki_SF2_GUI_Fight_ComboModel__JMMHIPLMPMG
                        (__this_00,*(int32_t *)&(__this_00->fields).super.EKFFCOAOHBD,0,in_x3);
      __this_01 = (Nekki_SF2_GUI_Fight_ComboItem_o *)
                  (__this_00->fields).super.super.super.super.super.m_CachedPtr;
      *(int32_t *)&(__this_00->fields).super.super.m_CancellationTokenSource = iVar1;
      if (__this_01 != (Nekki_SF2_GUI_Fight_ComboItem_o *)0x0) {
        Nekki_SF2_GUI_Fight_ComboItem__UpdateCount
                  (__this_01,(__this->fields).OPDLMLAODIG,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private ComboModel.IADNCANFNJH CCLACGABBDP(ComboItem ANGBPBINHBL)  [RVA 0x332BDA8]
// Nekki.SF2.GUI.Fight.ComboModel$$CCLACGABBDP @ RVA 0x332BDA8

Nekki_SF2_GUI_Fight_ComboModel_IADNCANFNJH_o *
Nekki_SF2_GUI_Fight_ComboModel__CCLACGABBDP
          (Nekki_SF2_GUI_Fight_ComboModel_o *__this,Nekki_SF2_GUI_Fight_ComboItem_o *ANGBPBINHBL,
          MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  int32_t iVar4;
  UnityEngine_RectTransform_o *pUVar5;
  System_Collections_Generic_List_ComboModel_IADNCANFNJH__o *pSVar6;
  Il2CppObject *pIVar7;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_Transform_o *parent;
  Nekki_SF2_GUI_Fight_ComboModel_IADNCANFNJH_o *__this_01;
  Nekki_SF2_GUI_Fight_ComboModel_o *__this_02;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Fight_ComboModel_IADNCANFNJH_array *pNVar9;
  float fVar10;
  float fVar11;
  UnityEngine_Vector2_o UVar12;
  UnityEngine_Vector2_o UVar13;
  UnityEngine_Vector3_o UVar14;
  UnityEngine_Rect_o UVar15;
  UnityEngine_Rect_o UVar16;
  
  if ((DAT_045678d4 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Fight_ComboModel_IADNCANFNJH_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ComboModel_IADNCANFNJH>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ComboModel_IADNCANFNJH>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ComboModel_IADNCANFNJH>_get_Item__);
    DAT_045678d4 = 1;
  }
  if (ANGBPBINHBL != (Nekki_SF2_GUI_Fight_ComboItem_o *)0x0) {
    fVar11 = (__this->fields).JOHMFEFNLPI.fields.y;
    pUVar5 = Nekki_SF2_GUI_Fight_ComboItem__get_rectTransform(ANGBPBINHBL,(MethodInfo *)0x0);
    if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
      fVar10 = 0.0;
      if ((__this->fields).NKKPNCHMEHC != 0) {
        fVar10 = 1.0;
      }
      UVar12.fields.y = 0.5;
      UVar12.fields.x = fVar10;
      UnityEngine_RectTransform__set_pivot(pUVar5,UVar12,(MethodInfo *)0x0);
      fVar10 = (__this->fields).PJINFMLCNGI;
      pUVar5 = Nekki_SF2_GUI_Fight_ComboItem__get_rectTransform(ANGBPBINHBL,(MethodInfo *)0x0);
      if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
        UnityEngine_RectTransform__set_anchorMin
                  (pUVar5,(UnityEngine_Vector2_o)(__this->fields).FHMKAKCKNAF.fields,
                   (MethodInfo *)0x0);
        pUVar5 = Nekki_SF2_GUI_Fight_ComboItem__get_rectTransform(ANGBPBINHBL,(MethodInfo *)0x0);
        if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
          UnityEngine_RectTransform__set_anchorMax
                    (pUVar5,(UnityEngine_Vector2_o)(__this->fields).CKILNMCNMKA.fields,
                     (MethodInfo *)0x0);
          pSVar6 = (__this->fields).EGHLGEIJLAM;
          if (pSVar6 != (System_Collections_Generic_List_ComboModel_IADNCANFNJH__o *)0x0) {
            iVar1 = (pSVar6->fields)._size;
            if (0 < iVar1) {
              pIVar7 = System_Collections_Generic_List<object>__get_Item
                                 ((System_Collections_Generic_List_object__o *)pSVar6,iVar1 + -1,
                                  Method_System_Collections_Generic_List<ComboModel_IADNCANFNJH>_get_Item__
                                 );
              if ((pIVar7 == (Il2CppObject *)0x0) || (pIVar7[1].klass == (Il2CppClass *)0x0))
              goto LAB_0342c06c;
              pUVar5 = Nekki_SF2_GUI_Fight_ComboItem__get_rectTransform
                                 ((Nekki_SF2_GUI_Fight_ComboItem_o *)pIVar7[1].klass,
                                  (MethodInfo *)0x0);
              __this_00 = Nekki_SF2_GUI_Fight_ComboItem__get_rectTransform
                                    (ANGBPBINHBL,(MethodInfo *)0x0);
              if (pUVar5 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0342c06c;
              UVar14 = UnityEngine_Transform__get_localPosition
                                 ((UnityEngine_Transform_o *)pUVar5,(MethodInfo *)0x0);
              UVar15 = UnityEngine_RectTransform__get_rect(pUVar5,(MethodInfo *)0x0);
              UVar12 = UnityEngine_RectTransform__get_pivot(pUVar5,(MethodInfo *)0x0);
              if (__this_00 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0342c06c;
              UVar16 = UnityEngine_RectTransform__get_rect(__this_00,(MethodInfo *)0x0);
              UVar13 = UnityEngine_RectTransform__get_pivot(__this_00,(MethodInfo *)0x0);
              fVar11 = ((UVar14.fields.y - UVar15.fields.m_Height * UVar12.fields.y) -
                       UVar16.fields.m_Height * UVar13.fields.y) + -40.0;
            }
            pUVar8 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)ANGBPBINHBL,(MethodInfo *)0x0);
            parent = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
              method_00 = (MethodInfo *)0x0;
              UnityEngine_Transform__SetParent(pUVar8,parent,false,(MethodInfo *)0x0);
              pUVar8 = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)ANGBPBINHBL,(MethodInfo *)0x0);
              if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
                UVar14.fields.y = fVar11;
                UVar14.fields.x = fVar10;
                UVar14.fields.z = 0.0;
                UnityEngine_Transform__set_localPosition(pUVar8,UVar14,(MethodInfo *)0x0);
                __this_01 = (Nekki_SF2_GUI_Fight_ComboModel_IADNCANFNJH_o *)
                            thunk_FUN_01bda818(Nekki_SF2_GUI_Fight_ComboModel_IADNCANFNJH_TypeInfo);
                Nekki_SF2_GUI_Fight_ComboModel_IADNCANFNJH___ctor(__this_01,(MethodInfo *)0x0);
                iVar4 = Nekki_SF2_GUI_Fight_ComboModel__JMMHIPLMPMG
                                  (__this_02,(ANGBPBINHBL->fields)._LMAILJNFCKH_k__BackingField,0,
                                   method_00);
                if (__this_01 != (Nekki_SF2_GUI_Fight_ComboModel_IADNCANFNJH_o *)0x0) {
                  (__this_01->fields).KAEBCKDNFHH = ANGBPBINHBL;
                  (__this_01->fields).KPOBFGCNFAG = iVar4;
                  thunk_FUN_01c20e04(&__this_01->fields,ANGBPBINHBL);
                  iVar1 = (ANGBPBINHBL->fields)._LMAILJNFCKH_k__BackingField;
                  (__this_01->fields).BGHFADDGPAD = iVar1;
                  (__this_01->fields).IPPKJMDIGKJ = iVar1 == 4;
                  lVar3 = Method_System_Collections_Generic_List<ComboModel_IADNCANFNJH>_Add__;
                  pSVar6 = (__this->fields).EGHLGEIJLAM;
                  if (pSVar6 != (System_Collections_Generic_List_ComboModel_IADNCANFNJH__o *)0x0) {
                    pNVar9 = (pSVar6->fields)._items;
                    (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
                    if (pNVar9 != (Nekki_SF2_GUI_Fight_ComboModel_IADNCANFNJH_array *)0x0) {
                      uVar2 = (pSVar6->fields)._size;
                      if (uVar2 < (uint)pNVar9->max_length) {
                        (pSVar6->fields)._size = uVar2 + 1;
                        pNVar9->m_Items[(int)uVar2] = __this_01;
                        thunk_FUN_01c20e04(pNVar9->m_Items + (int)uVar2,__this_01);
                      }
                      else {
                        System_Collections_Generic_List<object>__AddWithResize
                                  ((System_Collections_Generic_List_object__o *)pSVar6,
                                   (Il2CppObject *)__this_01,
                                   *(MethodInfo_26E4DAC **)
                                    (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
                      }
                      return __this_01;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0342c06c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void BENGEONLBHF()  [RVA 0x332D058]
// Nekki.SF2.GUI.Fight.ComboModel$$BENGEONLBHF @ RVA 0x332D058

void Nekki_SF2_GUI_Fight_ComboModel__BENGEONLBHF
               (Nekki_SF2_GUI_Fight_ComboModel_o *__this,MethodInfo *method)

{
  GOJLGHMMDBO_o *pGVar1;
  
  pGVar1 = (__this->fields).AMKECFKEGJH;
  if (pGVar1 != (GOJLGHMMDBO_o *)0x0) {
    (pGVar1->fields).GBFBOELDJDE = (pGVar1->fields).GBFBOELDJDE + 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Render()  [RVA 0x332D07C]
// Nekki.SF2.GUI.Fight.ComboModel$$Render @ RVA 0x332D07C

void Nekki_SF2_GUI_Fight_ComboModel__Render
               (Nekki_SF2_GUI_Fight_ComboModel_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  int32_t iVar3;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *in_x2;
  
  if ((DAT_045678d5 & 1) == 0) {
    FUN_01bab630(&GameUtils_TypeInfo);
    DAT_045678d5 = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Fight_ComboModel__MFPOPOLAEHM(__this,method);
  Nekki_SF2_GUI_Fight_ComboModel__ELOPIECONBH(__this,method_00);
  iVar2 = (__this->fields).ENMLIMOGANA;
  if (0 < iVar2) {
    iVar1 = (__this->fields).BGCKGKMOJJO;
                    /* try { // try from 0342d0cc to 0352d0d3 has its CatchHandler @ 0342d1a0 */
    if (iVar1 < (__this->fields).OJGEPLNIIDP) {
      (__this->fields).BGCKGKMOJJO = iVar1 + 1;
    }
    else {
                    /* try { // try from 0342d0e0 to 0352d0ef has its CatchHandler @ 0342d19c */
      if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar3 = GameUtils__BHIHCKDOJKB((MethodInfo *)0x0);
      if (iVar3 <= iVar2) {
        Nekki_SF2_GUI_Fight_ComboModel__ELAEKEBBFCI(__this,2,in_x2);
      }
      (__this->fields).BGCKGKMOJJO = 0;
      (__this->fields).ENMLIMOGANA = 0;
    }
  }
  return;
}


// ===== public void AddPerfect()  [RVA 0x332D124]
// Nekki.SF2.GUI.Fight.ComboModel$$AddPerfect @ RVA 0x332D124

void Nekki_SF2_GUI_Fight_ComboModel__AddPerfect
               (Nekki_SF2_GUI_Fight_ComboModel_o *__this,MethodInfo *method)

{
  GOJLGHMMDBO_o *pGVar1;
  
  pGVar1 = (__this->fields).AMKECFKEGJH;
  if (pGVar1 != (GOJLGHMMDBO_o *)0x0) {
                    /* try { // try from 0342d130 to 0352d153 has its CatchHandler @ 0342d190 */
    (pGVar1->fields).KODJDFKIJFJ = (pGVar1->fields).KODJDFKIJFJ + 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

