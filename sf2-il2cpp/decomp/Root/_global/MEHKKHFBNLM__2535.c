// TypeDefIndex 2535
// Namespace: 
// public class MEHKKHFBNLM
// Fields:
//   private List<GMGALNFPLPA> KPLKFOJFEMF; // 0x10
//   private float BNAEMMLBBFG; // 0x18
//   private float IOIHMDACLMO; // 0x1C
//   private const float PFCOIKDLLJC = -0.01;
//   private const float CLHDFIOJFMA = -0.049999997;
//   private float DDMDFBAPLHJ; // 0x20
//   private GameObject <KDDKJJLDFFO>k__BackingField; // 0x28
//   public bool FODLFBLPPBF; // 0x30
//   public int BGHFADDGPAD; // 0x34
//   public float JHLJELAKADM; // 0x38
//   public string KBOFABJIPPD; // 0x40
//   public int MFDBACKNCKL; // 0x48
//   public JHHFDBLANPH JHHFDBLANPH; // 0x50
//   public List<UnityAnimator> PHCHEEPCEOO; // 0x58
//   public bool KMPEKADHGMM; // 0x60

// ===== public void FGGIFIGBPBI(float OOGPLJBADCD)  [RVA 0x3392130]
// MEHKKHFBNLM$$FGGIFIGBPBI @ RVA 0x3392130

void MEHKKHFBNLM__FGGIFIGBPBI(MEHKKHFBNLM_o *__this,float OOGPLJBADCD,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *transform;
  MethodInfo *extraout_x1;
  double dVar1;
  
  if ((DAT_04567c2a & 1) == 0) {
    FUN_01bab630(&System_Math_TypeInfo);
    DAT_04567c2a = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields)._KDDKJJLDFFO_k__BackingField;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    transform = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(System_Math_TypeInfo);
    }
    dVar1 = System_Math__Round((double)OOGPLJBADCD,2,1,(MethodInfo *)0x0);
    UnityEngine_TransformExtensions__SetLocalPositionY(transform,(float)dVar1,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== public GameObject IJGHEOJPJLH()  [RVA 0x33921C8]
// MEHKKHFBNLM$$IJGHEOJPJLH @ RVA 0x33921C8

UnityEngine_GameObject_o * MEHKKHFBNLM__IJGHEOJPJLH(MEHKKHFBNLM_o *__this,MethodInfo *method)

{
  return (__this->fields)._KDDKJJLDFFO_k__BackingField;
}


// ===== public void OADFBMDLMOD(GMGALNFPLPA DKFEALCDDBI)  [RVA 0x33921D0]
// MEHKKHFBNLM$$OADFBMDLMOD @ RVA 0x33921D0

void MEHKKHFBNLM__OADFBMDLMOD(MEHKKHFBNLM_o *__this,GMGALNFPLPA_o *DKFEALCDDBI,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_Transform_o *parent;
  System_Collections_Generic_List_GMGALNFPLPA__o *__this_00;
  GMGALNFPLPA_array *pGVar5;
  
  if ((DAT_04567c2b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<GMGALNFPLPA>_Add__);
    DAT_04567c2b = 1;
  }
  if ((DKFEALCDDBI != (GMGALNFPLPA_o *)0x0) &&
     (pUVar3 = (DKFEALCDDBI->fields).OJJAMKDEMJJ, pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
    pUVar4 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
    pUVar3 = (__this->fields)._KDDKJJLDFFO_k__BackingField;
    if ((pUVar3 != (UnityEngine_GameObject_o *)0x0) &&
       (parent = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0),
       pUVar4 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__SetParent(pUVar4,parent,false,(MethodInfo *)0x0);
      lVar2 = Method_System_Collections_Generic_List<GMGALNFPLPA>_Add__;
      __this_00 = (__this->fields).KPLKFOJFEMF;
      if (__this_00 != (System_Collections_Generic_List_GMGALNFPLPA__o *)0x0) {
        pGVar5 = (__this_00->fields)._items;
        (__this_00->fields)._version = (__this_00->fields)._version + 1;
        if (pGVar5 != (GMGALNFPLPA_array *)0x0) {
          uVar1 = (__this_00->fields)._size;
          if (uVar1 < (uint)pGVar5->max_length) {
            (__this_00->fields)._size = uVar1 + 1;
            pGVar5->m_Items[(int)uVar1] = DKFEALCDDBI;
            thunk_FUN_01c20e04(pGVar5->m_Items + (int)uVar1,DKFEALCDDBI);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_00,
                       (Il2CppObject *)DKFEALCDDBI,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
          pUVar3 = (DKFEALCDDBI->fields).OJJAMKDEMJJ;
          if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
            pUVar4 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
            UnityEngine_TransformExtensions__SetLocalPositionZ
                      (pUVar4,(__this->fields).DDMDFBAPLHJ,(MethodInfo *)0x0);
            (__this->fields).DDMDFBAPLHJ = (__this->fields).DDMDFBAPLHJ + -0.01;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void JHFPMMMPGGJ(GMGALNFPLPA DDGLJFLLACC)  [RVA 0x33922F0]
// MEHKKHFBNLM$$JHFPMMMPGGJ @ RVA 0x33922F0

void MEHKKHFBNLM__JHFPMMMPGGJ(MEHKKHFBNLM_o *__this,GMGALNFPLPA_o *DDGLJFLLACC,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_Transform_o *parent;
  System_Collections_Generic_List_GMGALNFPLPA__o *__this_00;
  GMGALNFPLPA_array *pGVar6;
  UnityEngine_Object_o *x;
  
  if ((DAT_04567c2c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<GMGALNFPLPA>_Add__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567c2c = 1;
  }
  if (DDGLJFLLACC != (GMGALNFPLPA_o *)0x0) {
    x = (UnityEngine_Object_o *)(DDGLJFLLACC->fields).OJJAMKDEMJJ;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar3 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      return;
    }
    pUVar4 = (DDGLJFLLACC->fields).OJJAMKDEMJJ;
    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
      pUVar5 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
      pUVar4 = (__this->fields)._KDDKJJLDFFO_k__BackingField;
      if ((pUVar4 != (UnityEngine_GameObject_o *)0x0) &&
         (parent = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0),
         pUVar5 != (UnityEngine_Transform_o *)0x0)) {
        UnityEngine_Transform__SetParent(pUVar5,parent,false,(MethodInfo *)0x0);
        lVar2 = Method_System_Collections_Generic_List<GMGALNFPLPA>_Add__;
        __this_00 = (__this->fields).KPLKFOJFEMF;
        if (__this_00 != (System_Collections_Generic_List_GMGALNFPLPA__o *)0x0) {
          pGVar6 = (__this_00->fields)._items;
          (__this_00->fields)._version = (__this_00->fields)._version + 1;
          if (pGVar6 != (GMGALNFPLPA_array *)0x0) {
            uVar1 = (__this_00->fields)._size;
            if (uVar1 < (uint)pGVar6->max_length) {
              (__this_00->fields)._size = uVar1 + 1;
              pGVar6->m_Items[(int)uVar1] = DDGLJFLLACC;
              thunk_FUN_01c20e04(pGVar6->m_Items + (int)uVar1,DDGLJFLLACC);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_00,
                         (Il2CppObject *)DDGLJFLLACC,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70))
              ;
            }
            pUVar4 = (DDGLJFLLACC->fields).OJJAMKDEMJJ;
            if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
              pUVar5 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
              UnityEngine_TransformExtensions__SetLocalPositionZ
                        (pUVar5,(__this->fields).DDMDFBAPLHJ,(MethodInfo *)0x0);
              (__this->fields).DDMDFBAPLHJ = (__this->fields).DDMDFBAPLHJ + -0.01;
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void JODGPLBHHIA()  [RVA 0x339244C]
// MEHKKHFBNLM$$JODGPLBHHIA @ RVA 0x339244C

void MEHKKHFBNLM__JODGPLBHHIA(MEHKKHFBNLM_o *__this,MethodInfo *method)

{
  Util__JODGPLBHHIA((__this->fields)._KDDKJJLDFFO_k__BackingField,false,(MethodInfo *)0x0);
  return;
}


// ===== private void BKHABCMHCEP(GameObject CJNHFNHJHPE)  [RVA 0x339245C]
// MEHKKHFBNLM$$BKHABCMHCEP @ RVA 0x339245C

void MEHKKHFBNLM__BKHABCMHCEP
               (MEHKKHFBNLM_o *__this,UnityEngine_GameObject_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._KDDKJJLDFFO_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void FNALLLLMHPO(GMGALNFPLPA IEDGGGBEPGL)  [RVA 0x3392464]
// MEHKKHFBNLM$$FNALLLLMHPO @ RVA 0x3392464

void MEHKKHFBNLM__FNALLLLMHPO(MEHKKHFBNLM_o *__this,GMGALNFPLPA_o *IEDGGGBEPGL,MethodInfo *method)

{
  System_Collections_Generic_List_GMGALNFPLPA__o *__this_00;
  
  if ((DAT_04567c2d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<GMGALNFPLPA>_Remove__);
    DAT_04567c2d = 1;
  }
  if (IEDGGGBEPGL != (GMGALNFPLPA_o *)0x0) {
    GMGALNFPLPA__MIEOFLLFAEP(IEDGGGBEPGL,(MethodInfo *)0x0);
    __this_00 = (__this->fields).KPLKFOJFEMF;
    if (__this_00 != (System_Collections_Generic_List_GMGALNFPLPA__o *)0x0) {
      System_Collections_Generic_List<object>__Remove
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)IEDGGGBEPGL,
                 Method_System_Collections_Generic_List<GMGALNFPLPA>_Remove__);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public bool BFBBBJOMGJA()  [RVA 0x33924D8]
// MEHKKHFBNLM$$BFBBBJOMGJA @ RVA 0x33924D8

bool MEHKKHFBNLM__BFBBBJOMGJA(MEHKKHFBNLM_o *__this,MethodInfo *method)

{
  return (__this->fields).BGHFADDGPAD == 2;
}


// ===== public bool PFMFHBGPGFI()  [RVA 0x33924E8]
// MEHKKHFBNLM$$PFMFHBGPGFI @ RVA 0x33924E8

bool MEHKKHFBNLM__PFMFHBGPGFI(MEHKKHFBNLM_o *__this,MethodInfo *method)

{
  return (__this->fields).BGHFADDGPAD == 3;
}


// ===== public void KEBABBALAME(float OOGPLJBADCD)  [RVA 0x33924F8]
// MEHKKHFBNLM$$KEBABBALAME @ RVA 0x33924F8

void MEHKKHFBNLM__KEBABBALAME(MEHKKHFBNLM_o *__this,float OOGPLJBADCD,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *transform;
  MethodInfo *extraout_x1;
  double dVar1;
  
  if ((DAT_04567c2e & 1) == 0) {
    FUN_01bab630(&System_Math_TypeInfo);
    DAT_04567c2e = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields)._KDDKJJLDFFO_k__BackingField;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    transform = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(System_Math_TypeInfo);
    }
    dVar1 = System_Math__Round((double)OOGPLJBADCD,2,1,(MethodInfo *)0x0);
    UnityEngine_TransformExtensions__SetLocalPositionX(transform,(float)dVar1,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== public void GFFDLGBPMHM(GMGALNFPLPA DKFEALCDDBI)  [RVA 0x3392590]
// MEHKKHFBNLM$$GFFDLGBPMHM @ RVA 0x3392590

void MEHKKHFBNLM__GFFDLGBPMHM(MEHKKHFBNLM_o *__this,GMGALNFPLPA_o *DKFEALCDDBI,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  UnityEngine_Component_o *pUVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_Transform_o *parent;
  System_Collections_Generic_List_GMGALNFPLPA__o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  GMGALNFPLPA_array *pGVar5;
  
  if ((DAT_04567c2f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<GMGALNFPLPA>_Add__);
    DAT_04567c2f = 1;
  }
  if ((DKFEALCDDBI != (GMGALNFPLPA_o *)0x0) &&
     (pUVar3 = (UnityEngine_Component_o *)(DKFEALCDDBI->fields).HGMMHCMHINJ,
     pUVar3 != (UnityEngine_Component_o *)0x0)) {
    pUVar4 = UnityEngine_Component__get_transform(pUVar3,(MethodInfo *)0x0);
    __this_01 = (__this->fields)._KDDKJJLDFFO_k__BackingField;
    if ((__this_01 != (UnityEngine_GameObject_o *)0x0) &&
       (parent = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0),
       pUVar4 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__SetParent(pUVar4,parent,false,(MethodInfo *)0x0);
      lVar2 = Method_System_Collections_Generic_List<GMGALNFPLPA>_Add__;
      __this_00 = (__this->fields).KPLKFOJFEMF;
      if (__this_00 != (System_Collections_Generic_List_GMGALNFPLPA__o *)0x0) {
        pGVar5 = (__this_00->fields)._items;
        (__this_00->fields)._version = (__this_00->fields)._version + 1;
        if (pGVar5 != (GMGALNFPLPA_array *)0x0) {
          uVar1 = (__this_00->fields)._size;
          if (uVar1 < (uint)pGVar5->max_length) {
            (__this_00->fields)._size = uVar1 + 1;
            pGVar5->m_Items[(int)uVar1] = DKFEALCDDBI;
            thunk_FUN_01c20e04(pGVar5->m_Items + (int)uVar1,DKFEALCDDBI);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_00,
                       (Il2CppObject *)DKFEALCDDBI,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
          (__this->fields).DDMDFBAPLHJ = (__this->fields).DDMDFBAPLHJ + -0.049999997;
          pUVar3 = (UnityEngine_Component_o *)(DKFEALCDDBI->fields).HGMMHCMHINJ;
          if (pUVar3 != (UnityEngine_Component_o *)0x0) {
            pUVar4 = UnityEngine_Component__get_transform(pUVar3,(MethodInfo *)0x0);
            UnityEngine_TransformExtensions__SetLocalPositionZ
                      (pUVar4,(__this->fields).DDMDFBAPLHJ,(MethodInfo *)0x0);
            (__this->fields).DDMDFBAPLHJ = (__this->fields).DDMDFBAPLHJ + -0.049999997;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void MHEKOCOGKEE(float MJCBABPPIAD)  [RVA 0x33926C4]
// MEHKKHFBNLM$$MHEKOCOGKEE @ RVA 0x33926C4

void MEHKKHFBNLM__MHEKOCOGKEE(MEHKKHFBNLM_o *__this,float MJCBABPPIAD,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Vector3_o value;
  
  __this_00 = (__this->fields)._KDDKJJLDFFO_k__BackingField;
  if ((__this_00 != (UnityEngine_GameObject_o *)0x0) &&
     (__this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_Transform_o *)0x0)) {
    value.fields.y = MJCBABPPIAD;
    value.fields.x = MJCBABPPIAD;
    value.fields.z = 1.0;
    UnityEngine_Transform__set_localScale(__this_01,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void IELLEFEFFJD()  [RVA 0x3392704]
// MEHKKHFBNLM$$IELLEFEFFJD @ RVA 0x3392704

void MEHKKHFBNLM__IELLEFEFFJD(MEHKKHFBNLM_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_UnityAnimator__o *__this_00;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_04567c30 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<UnityAnimator>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<UnityAnimator>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<UnityAnimator>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<UnityAnimator>_GetEnumerator__);
    DAT_04567c30 = 1;
    method = extraout_x1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).PHCHEEPCEOO;
  (__this->fields).KMPEKADHGMM = true;
  if (__this_00 != (System_Collections_Generic_List_UnityAnimator__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<UnityAnimator>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<UnityAnimator>_MoveNext__
                        );
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_38,
                   Method_System_Collections_Generic_List_Enumerator<UnityAnimator>_Dispose__);
        return;
      }
      if ((UnityAnimator_o *)local_38.fields._current == (UnityAnimator_o *)0x0) break;
      UnityAnimator__Play((UnityAnimator_o *)local_38.fields._current,(MethodInfo *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== public void EKPGACDAEJO(GameObject DDGLJFLLACC)  [RVA 0x3392858]
// MEHKKHFBNLM$$EKPGACDAEJO @ RVA 0x3392858

void MEHKKHFBNLM__EKPGACDAEJO
               (MEHKKHFBNLM_o *__this,UnityEngine_GameObject_o *DDGLJFLLACC,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_Transform_o *parent;
  UnityEngine_GameObject_o *__this_00;
  
  if (DDGLJFLLACC != (UnityEngine_GameObject_o *)0x0) {
    pUVar1 = UnityEngine_GameObject__get_transform(DDGLJFLLACC,(MethodInfo *)0x0);
    __this_00 = (__this->fields)._KDDKJJLDFFO_k__BackingField;
    if ((__this_00 != (UnityEngine_GameObject_o *)0x0) &&
       (parent = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0),
       pUVar1 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__SetParent(pUVar1,parent,false,(MethodInfo *)0x0);
      pUVar1 = UnityEngine_GameObject__get_transform(DDGLJFLLACC,(MethodInfo *)0x0);
      UnityEngine_TransformExtensions__SetLocalPositionZ
                (pUVar1,(__this->fields).DDMDFBAPLHJ,(MethodInfo *)0x0);
      (__this->fields).DDMDFBAPLHJ = (__this->fields).DDMDFBAPLHJ + -0.01;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(int NGPAOPCDOLF)  [RVA 0x33928E4]
// MEHKKHFBNLM$$.ctor @ RVA 0x33928E4

void MEHKKHFBNLM___ctor(MEHKKHFBNLM_o *__this,int32_t NGPAOPCDOLF,MethodInfo *method)

{
  undefined1 auVar1 [12];
  System_Collections_Generic_List_GMGALNFPLPA__o *__this_00;
  System_Collections_Generic_List_UnityAnimator__o *__this_01;
  System_Collections_Generic_List_UnityAnimator__o **ppSVar2;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_GameObject_o **ppUVar4;
  
  if ((DAT_04567c31 & 1) == 0) {
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<UnityAnimator>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GMGALNFPLPA>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<UnityAnimator>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<GMGALNFPLPA>_TypeInfo);
    FUN_01bab630(&StringLiteral_8350/*"Layer"*/);
    DAT_04567c31 = 1;
  }
  __this_00 = (System_Collections_Generic_List_GMGALNFPLPA__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<GMGALNFPLPA>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<GMGALNFPLPA>__ctor__);
  (__this->fields).KPLKFOJFEMF = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  __this_01 = (System_Collections_Generic_List_UnityAnimator__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<UnityAnimator>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<UnityAnimator>__ctor__);
  ppSVar2 = &(__this->fields).PHCHEEPCEOO;
  *ppSVar2 = __this_01;
  thunk_FUN_01c20e04(ppSVar2,__this_01);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).MFDBACKNCKL = NGPAOPCDOLF;
  __this_02 = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
  UnityEngine_GameObject___ctor(__this_02,StringLiteral_8350/*"Layer"*/,(MethodInfo *)0x0);
  ppUVar4 = &(__this->fields)._KDDKJJLDFFO_k__BackingField;
  *ppUVar4 = __this_02;
  thunk_FUN_01c20e04(ppUVar4,__this_02);
  if ((*ppUVar4 != (UnityEngine_GameObject_o *)0x0) &&
     (pUVar3 = UnityEngine_GameObject__get_transform(*ppUVar4,(MethodInfo *)0x0),
     pUVar3 != (UnityEngine_Transform_o *)0x0)) {
    auVar1._4_8_ = 0;
    auVar1._0_4_ = (float)NGPAOPCDOLF;
    UnityEngine_Transform__set_localPosition
              (pUVar3,(UnityEngine_Vector3_o)(auVar1 << 0x40),(MethodInfo *)0x0);
    if (*ppUVar4 != (UnityEngine_GameObject_o *)0x0) {
      pUVar3 = UnityEngine_GameObject__get_transform(*ppUVar4,(MethodInfo *)0x0);
      if (DAT_0455fa7f == '\0') {
        FUN_01bab630(&UnityEngine_Vector3_TypeInfo);
        DAT_0455fa7f = '\x01';
      }
      if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_localScale
                  (pUVar3,(UnityEngine_Vector3_o)
                          (UnityEngine_Vector3_TypeInfo->static_fields->oneVector).fields,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void BDHAMOEKNNK()  [RVA 0x3392AA8]
// MEHKKHFBNLM$$BDHAMOEKNNK @ RVA 0x3392AA8

void MEHKKHFBNLM__BDHAMOEKNNK(MEHKKHFBNLM_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  System_Collections_Generic_List_GMGALNFPLPA__o *__this_00;
  Il2CppObject *pIVar3;
  MethodInfo *extraout_x1;
  int index;
  
  if ((DAT_04567c32 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<GMGALNFPLPA>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GMGALNFPLPA>_get_Item__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04567c32 = 1;
    method = extraout_x1;
  }
  if ((__this->fields).KMPEKADHGMM == false) {
    MEHKKHFBNLM__IELLEFEFFJD(__this,method);
  }
  __this_00 = (__this->fields).KPLKFOJFEMF;
  if (__this_00 != (System_Collections_Generic_List_GMGALNFPLPA__o *)0x0) {
    iVar1 = (__this_00->fields)._size;
    if (iVar1 < 1) {
      return;
    }
    index = 0;
    do {
      pIVar3 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,index,
                          Method_System_Collections_Generic_List<GMGALNFPLPA>_get_Item__);
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo);
      }
      iVar2 = MGNPHCAAEIO__PCJHAMFGJLP((MethodInfo *)0x0);
      if (pIVar3 == (Il2CppObject *)0x0) break;
      (*pIVar3->klass->vtable[5].methodPtr)
                (1.0 / (float)iVar2,pIVar3,pIVar3->klass->vtable[5].method);
      index = index + 1;
      if (iVar1 == index) {
        return;
      }
      __this_00 = (__this->fields).KPLKFOJFEMF;
    } while (__this_00 != (System_Collections_Generic_List_GMGALNFPLPA__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

