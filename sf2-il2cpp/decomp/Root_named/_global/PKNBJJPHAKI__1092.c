// TypeDefIndex 1092
// Namespace: 
// public class PKNBJJPHAKI
// Fields:
//   private GameObject LDAKOINICNJ; // 0x10
//   private List<ModelObject> DDOAJGPFCNB; // 0x18
//   private ModelObject JBPKNAKOHLP; // 0x20
//   private ModelObject AAJIHJPLHDA; // 0x28

// ===== public GameObject IJGHEOJPJLH()  [RVA 0x30E1028]
// PKNBJJPHAKI$$IJGHEOJPJLH @ RVA 0x30E1028

UnityEngine_GameObject_o * PKNBJJPHAKI__IJGHEOJPJLH(PKNBJJPHAKI_o *__this,MethodInfo *method)

{
  return (__this->fields).LDAKOINICNJ;
}


// ===== public void .ctor()  [RVA 0x30E1030]
// PKNBJJPHAKI$$.ctor @ RVA 0x30E1030

void PKNBJJPHAKI___ctor(PKNBJJPHAKI_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GBJGJEGPHKD__o *__this_00;
  System_Collections_Generic_List_GBJGJEGPHKD__o **ppSVar1;
  UnityEngine_GameObject_o *__this_01;
  MethodInfo *extraout_x1;
  
  if ((DAT_045663a1 & 1) == 0) {
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelObject>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ModelObject>_TypeInfo);
    FUN_01bab630(&StringLiteral_14802/*"ViewerModel"*/);
    DAT_045663a1 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_GBJGJEGPHKD__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<ModelObject>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<ModelObject>__ctor__);
  ppSVar1 = &(__this->fields).DDOAJGPFCNB;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  __this_01 = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
  UnityEngine_GameObject___ctor(__this_01,StringLiteral_14802/*"ViewerModel"*/,(MethodInfo *)0x0);
  (__this->fields).LDAKOINICNJ = __this_01;
  thunk_FUN_01c20e04(&__this->fields,__this_01);
  return;
}


// ===== public void PLJOFBGBAMK(ModelObject BCKBBGCOMJD, bool CJNHFNHJHPE)  [RVA 0x30E1110]
// PKNBJJPHAKI$$PLJOFBGBAMK @ RVA 0x30E1110

void PKNBJJPHAKI__PLJOFBGBAMK
               (PKNBJJPHAKI_o *__this,ModelObject_o *BCKBBGCOMJD,bool CJNHFNHJHPE,MethodInfo *method
               )

{
  bool bVar1;
  System_Collections_Generic_List_GBJGJEGPHKD__o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  Model_o *pOVar2;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_045663a2 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ModelObject>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ModelObject>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ModelObject>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelObject>_GetEnumerator__);
    DAT_045663a2 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).DDOAJGPFCNB;
  if (__this_00 == (System_Collections_Generic_List_GBJGJEGPHKD__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<ModelObject>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<ModelObject>_MoveNext__);
    if (!bVar1) goto LAB_031e11e0;
  } while ((ModelObject_o *)local_48.fields._current != BCKBBGCOMJD);
  if (BCKBBGCOMJD == (ModelObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pOVar2 = (BCKBBGCOMJD->fields).KOHECBJAFKG;
  if (pOVar2 == (Model_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  __this_01 = (pOVar2->fields).LDAKOINICNJ;
  if (__this_01 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  UnityEngine_GameObject__SetActive(__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
LAB_031e11e0:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<ModelObject>_Dispose__);
  return;
}


// ===== public int OCJCMHLABBF(ModelObject BCKBBGCOMJD, Color EFJKPCADGJH, bool PMIAIAOKFND)  [RVA 0x30E1280]
// PKNBJJPHAKI$$OCJCMHLABBF @ RVA 0x30E1280

int32_t PKNBJJPHAKI__OCJCMHLABBF
                  (PKNBJJPHAKI_o *__this,ModelObject_o *BCKBBGCOMJD,UnityEngine_Color_o EFJKPCADGJH,
                  bool PMIAIAOKFND,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_Transform_o *parent;
  System_Collections_Generic_List_GBJGJEGPHKD__o *__this_00;
  Model_o *pOVar5;
  ModelObject_array *pGVar6;
  UnityEngine_Vector3_StaticFields *pUVar7;
  ModelObject_o **ppGVar8;
  UnityEngine_Vector3_o UVar9;
  UnityEngine_Vector3_o value;
  
  if ((DAT_045663a3 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelObject>_Add__);
    DAT_045663a3 = 1;
  }
  if (PMIAIAOKFND) {
    ppGVar8 = &(__this->fields).JBPKNAKOHLP;
    if (*ppGVar8 == (ModelObject_o *)0x0) {
      *ppGVar8 = BCKBBGCOMJD;
      thunk_FUN_01c20e04(ppGVar8,BCKBBGCOMJD);
                    /* try { // try from 031e1420 to 032e1683 has its CatchHandler @ 031e1420
                       catch() { ... } // from try @ 031e1420 with catch @ 031e1420
                       catch() { ... } // from try @ 031e1794 with catch @ 031e1420
                       catch() { ... } // from try @ 031e18d8 with catch @ 031e1420
                       catch() { ... } // from try @ 031e18e0 with catch @ 031e1420
                       catch() { ... } // from try @ 031e1990 with catch @ 031e1420 */
      if ((((*ppGVar8 == (ModelObject_o *)0x0) ||
           (pOVar5 = ((*ppGVar8)->fields).KOHECBJAFKG, pOVar5 == (Model_o *)0x0)) ||
          (pUVar3 = (pOVar5->fields).LDAKOINICNJ, pUVar3 == (UnityEngine_GameObject_o *)0x0)) ||
         (pUVar4 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0),
         pUVar4 == (UnityEngine_Transform_o *)0x0)) goto LAB_031e14ac;
      UVar9 = UnityEngine_Transform__get_position(pUVar4,(MethodInfo *)0x0);
      if (DAT_0455fb9d == '\0') {
        FUN_01bab630(&UnityEngine_Vector3_TypeInfo);
        DAT_0455fb9d = '\x01';
      }
      pUVar7 = UnityEngine_Vector3_TypeInfo->static_fields;
      value.fields.x = UVar9.fields.x - (pUVar7->forwardVector).fields.x * 0.001;
      value.fields.y = UVar9.fields.y - (pUVar7->forwardVector).fields.y * 0.001;
      value.fields.z = UVar9.fields.z - (pUVar7->forwardVector).fields.z * 0.001;
      UnityEngine_Transform__set_position(pUVar4,value,(MethodInfo *)0x0);
    }
    else {
      ppGVar8 = &(__this->fields).AAJIHJPLHDA;
      *ppGVar8 = BCKBBGCOMJD;
      thunk_FUN_01c20e04(ppGVar8,BCKBBGCOMJD);
    }
  }
  if (((BCKBBGCOMJD != (ModelObject_o *)0x0) &&
      (pOVar5 = (BCKBBGCOMJD->fields).KOHECBJAFKG, pOVar5 != (Model_o *)0x0)) &&
     (pUVar3 = (pOVar5->fields).LDAKOINICNJ, pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
    pUVar4 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
    pUVar3 = (__this->fields).LDAKOINICNJ;
    if ((pUVar3 != (UnityEngine_GameObject_o *)0x0) &&
       (parent = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0),
       pUVar4 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__SetParent(pUVar4,parent,false,(MethodInfo *)0x0);
      pOVar5 = (BCKBBGCOMJD->fields).KOHECBJAFKG;
      if (pOVar5 != (Model_o *)0x0) {
        Model__HLCMLOBHLDA(pOVar5,EFJKPCADGJH,false,(MethodInfo *)0x0);
        lVar2 = Method_System_Collections_Generic_List<ModelObject>_Add__;
        __this_00 = (__this->fields).DDOAJGPFCNB;
        if (__this_00 != (System_Collections_Generic_List_GBJGJEGPHKD__o *)0x0) {
          pGVar6 = (__this_00->fields)._items;
          (__this_00->fields)._version = (__this_00->fields)._version + 1;
          if (pGVar6 != (ModelObject_array *)0x0) {
            uVar1 = (__this_00->fields)._size;
            if (uVar1 < (uint)pGVar6->max_length) {
              (__this_00->fields)._size = uVar1 + 1;
              pGVar6->m_Items[(int)uVar1] = BCKBBGCOMJD;
              thunk_FUN_01c20e04(pGVar6->m_Items + (int)uVar1,BCKBBGCOMJD);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_00,
                         (Il2CppObject *)BCKBBGCOMJD,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70))
              ;
            }
            return 0;
          }
        }
      }
    }
  }
LAB_031e14ac:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public ModelObject CKCPEBFBCNL()  [RVA 0x30E14B0]
// PKNBJJPHAKI$$CKCPEBFBCNL @ RVA 0x30E14B0

ModelObject_o * PKNBJJPHAKI__CKCPEBFBCNL(PKNBJJPHAKI_o *__this,MethodInfo *method)

{
  return (__this->fields).JBPKNAKOHLP;
}


// ===== public void GIENGNEGHPJ(float IDBMGJFGIJH)  [RVA 0x30E14B8]
// PKNBJJPHAKI$$GIENGNEGHPJ @ RVA 0x30E14B8

void PKNBJJPHAKI__GIENGNEGHPJ(PKNBJJPHAKI_o *__this,float IDBMGJFGIJH,MethodInfo *method)

{
  return;
}


// ===== public void NDNPGAKJLHM()  [RVA 0x30E14BC]
// PKNBJJPHAKI$$NDNPGAKJLHM @ RVA 0x30E14BC

void PKNBJJPHAKI__NDNPGAKJLHM(PKNBJJPHAKI_o *__this,MethodInfo *method)

{
  int32_t length;
  ModelObject_o **ppGVar1;
  System_Collections_Generic_List_GBJGJEGPHKD__o *pSVar2;
  
  if ((DAT_045663a4 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelObject>_Clear__);
    DAT_045663a4 = 1;
  }
  ppGVar1 = &(__this->fields).JBPKNAKOHLP;
  *ppGVar1 = (ModelObject_o *)0x0;
  thunk_FUN_01c20e04(ppGVar1,0);
  ppGVar1 = &(__this->fields).AAJIHJPLHDA;
  *ppGVar1 = (ModelObject_o *)0x0;
  thunk_FUN_01c20e04(ppGVar1,0);
  pSVar2 = (__this->fields).DDOAJGPFCNB;
  if (pSVar2 != (System_Collections_Generic_List_GBJGJEGPHKD__o *)0x0) {
    length = (pSVar2->fields)._size;
    (pSVar2->fields)._size = 0;
    (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public ModelObject EGOLFIDLFOF()  [RVA 0x30E154C]
// PKNBJJPHAKI$$EGOLFIDLFOF @ RVA 0x30E154C

ModelObject_o * PKNBJJPHAKI__EGOLFIDLFOF(PKNBJJPHAKI_o *__this,MethodInfo *method)

{
  return (__this->fields).AAJIHJPLHDA;
}


// ===== public float HJBLPDBMFKK()  [RVA 0x30E1554]
// PKNBJJPHAKI$$HJBLPDBMFKK @ RVA 0x30E1554

float PKNBJJPHAKI__HJBLPDBMFKK(PKNBJJPHAKI_o *__this,MethodInfo *method)

{
  ModelObject_o *pGVar1;
  Vector3f_o *CIBIKDNNBAM;
  Vector3f_o *IGCGOHHCMHD;
  float fVar2;
  
  pGVar1 = (__this->fields).JBPKNAKOHLP;
  if ((pGVar1 != (ModelObject_o *)0x0) && ((__this->fields).AAJIHJPLHDA != (ModelObject_o *)0x0)) {
    CIBIKDNNBAM = ModelObject__PLEJOMOEFNE(pGVar1,(MethodInfo *)0x0);
    pGVar1 = (__this->fields).AAJIHJPLHDA;
    if (pGVar1 != (ModelObject_o *)0x0) {
      IGCGOHHCMHD = ModelObject__PLEJOMOEFNE(pGVar1,(MethodInfo *)0x0);
      fVar2 = PKHLGDMJPMF__PAMPGOGMIJN(CIBIKDNNBAM,IGCGOHHCMHD,(MethodInfo *)0x0);
      return fVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return 0.0;
}


// ===== public void HMDJFLDLPMN(int DPJIDNBJIBG)  [RVA 0x30E15B0]
// PKNBJJPHAKI$$HMDJFLDLPMN @ RVA 0x30E15B0

void PKNBJJPHAKI__HMDJFLDLPMN(PKNBJJPHAKI_o *__this,int32_t DPJIDNBJIBG,MethodInfo *method)

{
  System_Collections_Generic_List_GBJGJEGPHKD__o *pSVar1;
  ModelObject_o *pGVar2;
  ModelObject_o **ppGVar3;
  
  if ((DAT_045663a5 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelObject>_RemoveAt__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelObject>_get_Item__);
    DAT_045663a5 = 1;
  }
  pSVar1 = (__this->fields).DDOAJGPFCNB;
  if (pSVar1 != (System_Collections_Generic_List_GBJGJEGPHKD__o *)0x0) {
    pGVar2 = (ModelObject_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar1,DPJIDNBJIBG,
                        Method_System_Collections_Generic_List<ModelObject>_get_Item__);
    ppGVar3 = &(__this->fields).JBPKNAKOHLP;
    if ((pGVar2 == *ppGVar3) || (ppGVar3 = &(__this->fields).AAJIHJPLHDA, pGVar2 == *ppGVar3)) {
      *ppGVar3 = (ModelObject_o *)0x0;
      thunk_FUN_01c20e04(ppGVar3,0);
    }
    pSVar1 = (__this->fields).DDOAJGPFCNB;
    if (pSVar1 != (System_Collections_Generic_List_GBJGJEGPHKD__o *)0x0) {
      System_Collections_Generic_List<object>__RemoveAt
                ((System_Collections_Generic_List_object__o *)pSVar1,DPJIDNBJIBG,
                 Method_System_Collections_Generic_List<ModelObject>_RemoveAt__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

