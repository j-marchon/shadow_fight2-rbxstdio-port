// TypeDefIndex 3020
// Namespace: 
// public class MBDJMJLHFOO
// Fields:
//   protected List<MBDJMJLHFOO.MJFFMMHJCNB> DGPKPHAHOJP; // 0x10
//   private bool ODOKIDEGENN; // 0x18
//   protected int MONBPDGKCOM; // 0x1C
//   protected int CJHIGLFGNBP; // 0x20

// ===== protected void LOGLJOCPFCN(int PCKDEOGMDHH, int DGNJLFEFJFD)  [RVA 0x34B1534]
// MBDJMJLHFOO$$LOGLJOCPFCN @ RVA 0x34B1534

/* WARNING: Type propagation algorithm not settling */

void MBDJMJLHFOO__LOGLJOCPFCN
               (MBDJMJLHFOO_o *__this,int32_t PCKDEOGMDHH,int32_t DGNJLFEFJFD,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  MBDJMJLHFOO_MJFFMMHJCNB_o *__this_00;
  System_Collections_Generic_List_CNDPAJOLKFN__o *pSVar3;
  System_Collections_Generic_List_MBDJMJLHFOO_MJFFMMHJCNB__o *__this_01;
  CNDPAJOLKFN_o *__this_02;
  MBDJMJLHFOO_MJFFMMHJCNB_array *pMVar4;
  CNDPAJOLKFN_array *pCVar5;
  int iVar6;
  MBDJMJLHFOO_MJFFMMHJCNB_Fields *pMVar7;
  int iVar8;
  
  if ((DAT_04568560 & 1) == 0) {
    FUN_01bab630(&CNDPAJOLKFN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<CNDPAJOLKFN>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MBDJMJLHFOO_MJFFMMHJCNB>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<CNDPAJOLKFN>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<CNDPAJOLKFN>_TypeInfo);
    FUN_01bab630(&MBDJMJLHFOO_MJFFMMHJCNB_TypeInfo);
    DAT_04568560 = 1;
  }
  if (0 < PCKDEOGMDHH) {
    iVar8 = 0;
    do {
      __this_00 = (MBDJMJLHFOO_MJFFMMHJCNB_o *)thunk_FUN_01bda818(MBDJMJLHFOO_MJFFMMHJCNB_TypeInfo);
      System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
      pSVar3 = (System_Collections_Generic_List_CNDPAJOLKFN__o *)
               thunk_FUN_01bda818(System_Collections_Generic_List<CNDPAJOLKFN>_TypeInfo);
      System_Collections_Generic_List<object>___ctor
                ((System_Collections_Generic_List_object__o *)pSVar3,DGNJLFEFJFD,
                 Method_System_Collections_Generic_List<CNDPAJOLKFN>__ctor__);
      if (__this_00 == (MBDJMJLHFOO_MJFFMMHJCNB_o *)0x0) {
LAB_035b1750:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pMVar7 = &__this_00->fields;
      pMVar7->KOANCCDDBDA = pSVar3;
      thunk_FUN_01c20e04(pMVar7,pSVar3);
      lVar2 = Method_System_Collections_Generic_List<MBDJMJLHFOO_MJFFMMHJCNB>_Add__;
      __this_01 = (__this->fields).DGPKPHAHOJP;
      if (__this_01 == (System_Collections_Generic_List_MBDJMJLHFOO_MJFFMMHJCNB__o *)0x0)
      goto LAB_035b1750;
      pMVar4 = (__this_01->fields)._items;
      (__this_01->fields)._version = (__this_01->fields)._version + 1;
      if (pMVar4 == (MBDJMJLHFOO_MJFFMMHJCNB_array *)0x0) goto LAB_035b1750;
      uVar1 = (__this_01->fields)._size;
      if (uVar1 < (uint)pMVar4->max_length) {
        (__this_01->fields)._size = uVar1 + 1;
        pMVar4->m_Items[(int)uVar1] = __this_00;
        thunk_FUN_01c20e04(pMVar4->m_Items + (int)uVar1,__this_00);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)__this_00,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      iVar6 = DGNJLFEFJFD;
      if (0 < DGNJLFEFJFD) {
        do {
          pSVar3 = pMVar7->KOANCCDDBDA;
          __this_02 = (CNDPAJOLKFN_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo);
          CNDPAJOLKFN___ctor(__this_02,(MethodInfo *)0x0);
          lVar2 = Method_System_Collections_Generic_List<CNDPAJOLKFN>_Add__;
          if (pSVar3 == (System_Collections_Generic_List_CNDPAJOLKFN__o *)0x0) goto LAB_035b1750;
          pCVar5 = (pSVar3->fields)._items;
          (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
          if (pCVar5 == (CNDPAJOLKFN_array *)0x0) goto LAB_035b1750;
          uVar1 = (pSVar3->fields)._size;
          if (uVar1 < (uint)pCVar5->max_length) {
            (pSVar3->fields)._size = uVar1 + 1;
            pCVar5->m_Items[(int)uVar1] = __this_02;
            thunk_FUN_01c20e04(pCVar5->m_Items + (int)uVar1,__this_02);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)__this_02
                       ,*(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      iVar8 = iVar8 + 1;
      (__this_00->fields).ONGLGHIKBJF = DGNJLFEFJFD;
    } while (iVar8 != PCKDEOGMDHH);
  }
  return;
}


// ===== public void AMMECKCJFAM(int CIBIKDNNBAM, int IGCGOHHCMHD, bool GCLNGPHDFKM, Vector3[][] OCMMDIHLKMH)  [RVA 0x34B175C]
// MBDJMJLHFOO$$AMMECKCJFAM @ RVA 0x34B175C

void MBDJMJLHFOO__AMMECKCJFAM
               (MBDJMJLHFOO_o *__this,int32_t CIBIKDNNBAM,int32_t IGCGOHHCMHD,bool GCLNGPHDFKM,
               UnityEngine_Vector3_array_array *OCMMDIHLKMH,MethodInfo *method)

{
  uint uVar1;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)(ulong)(uint)IGCGOHHCMHD;
  if ((DAT_04568561 & 1) == 0) {
    FUN_01bab630(&System_Math_TypeInfo);
    DAT_04568561 = 1;
  }
  if (GCLNGPHDFKM) {
    if (OCMMDIHLKMH == (UnityEngine_Vector3_array_array *)0x0) goto LAB_035b1858;
    if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    method_00 = (MethodInfo *)0x0;
    uVar1 = System_Math__Min((int)OCMMDIHLKMH->max_length + -1,CIBIKDNNBAM + 2,(MethodInfo *)0x0);
    if ((uint)OCMMDIHLKMH->max_length <= uVar1) {
LAB_035b1854:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    MBDJMJLHFOO__IDJNOIMDGKJ(__this,OCMMDIHLKMH->m_Items[(int)uVar1],method_00);
    if ((uint)OCMMDIHLKMH->max_length <= uVar1) goto LAB_035b1854;
    MBDJMJLHFOO__IDJNOIMDGKJ(__this,OCMMDIHLKMH->m_Items[(int)uVar1],method_00);
  }
  if (CIBIKDNNBAM <= IGCGOHHCMHD) {
    if (OCMMDIHLKMH == (UnityEngine_Vector3_array_array *)0x0) {
LAB_035b1858:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      if ((uint)OCMMDIHLKMH->max_length <= (uint)CIBIKDNNBAM) goto LAB_035b1854;
      MBDJMJLHFOO__IDJNOIMDGKJ(__this,OCMMDIHLKMH->m_Items[CIBIKDNNBAM],method_00);
      CIBIKDNNBAM = CIBIKDNNBAM + 1;
    } while (CIBIKDNNBAM <= IGCGOHHCMHD);
  }
  return;
}


// ===== public void BNBHDJBHALI()  [RVA 0x34B19BC]
// MBDJMJLHFOO$$BNBHDJBHALI @ RVA 0x34B19BC

void MBDJMJLHFOO__BNBHDJBHALI(MBDJMJLHFOO_o *__this,MethodInfo *method)

{
  (__this->fields).CJHIGLFGNBP = (__this->fields).CJHIGLFGNBP + 1;
  return;
}


// ===== public MBDJMJLHFOO.MJFFMMHJCNB HBMICHOLLMF(int JJMCKHDALCF)  [RVA 0x34B19CC]
// MBDJMJLHFOO$$HBMICHOLLMF @ RVA 0x34B19CC

MBDJMJLHFOO_MJFFMMHJCNB_o *
MBDJMJLHFOO__HBMICHOLLMF(MBDJMJLHFOO_o *__this,int32_t JJMCKHDALCF,MethodInfo *method)

{
  System_Collections_Generic_List_MBDJMJLHFOO_MJFFMMHJCNB__o *__this_00;
  MBDJMJLHFOO_MJFFMMHJCNB_o *pMVar1;
  
  if ((DAT_04568562 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MBDJMJLHFOO_MJFFMMHJCNB>_get_Item__);
    DAT_04568562 = 1;
  }
  if (JJMCKHDALCF < (__this->fields).MONBPDGKCOM) {
    __this_00 = (__this->fields).DGPKPHAHOJP;
    if (__this_00 != (System_Collections_Generic_List_MBDJMJLHFOO_MJFFMMHJCNB__o *)0x0) {
      pMVar1 = (MBDJMJLHFOO_MJFFMMHJCNB_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,JJMCKHDALCF,
                          Method_System_Collections_Generic_List<MBDJMJLHFOO_MJFFMMHJCNB>_get_Item__
                         );
      return pMVar1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return (MBDJMJLHFOO_MJFFMMHJCNB_o *)0x0;
}


// ===== public void .ctor()  [RVA 0x34B1A40]
// MBDJMJLHFOO$$.ctor @ RVA 0x34B1A40

void MBDJMJLHFOO___ctor(MBDJMJLHFOO_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_MBDJMJLHFOO_MJFFMMHJCNB__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568563 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MBDJMJLHFOO_MJFFMMHJCNB>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<MBDJMJLHFOO_MJFFMMHJCNB>_TypeInfo);
    DAT_04568563 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_MBDJMJLHFOO_MJFFMMHJCNB__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<MBDJMJLHFOO_MJFFMMHJCNB>_TypeInfo,
                                 method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<MBDJMJLHFOO_MJFFMMHJCNB>__ctor__);
  (__this->fields).DGPKPHAHOJP = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void GHKNFJJOIDM(float EDCGCMAKCOM, float PFHCGPLGLHC = 0, float BCPIEFABCEC = 0)  [RVA 0x34B1AC8]
// MBDJMJLHFOO$$GHKNFJJOIDM @ RVA 0x34B1AC8

void MBDJMJLHFOO__GHKNFJJOIDM
               (MBDJMJLHFOO_o *__this,float EDCGCMAKCOM,float PFHCGPLGLHC,float BCPIEFABCEC,
               MethodInfo *method)

{
  System_Collections_Generic_List_MBDJMJLHFOO_MJFFMMHJCNB__o *pSVar1;
  Il2CppObject *pIVar2;
  CNDPAJOLKFN_o *__this_00;
  int index;
  int index_00;
  
  if ((DAT_04568564 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<CNDPAJOLKFN>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MBDJMJLHFOO_MJFFMMHJCNB>_get_Item__);
    DAT_04568564 = 1;
  }
  index = (uint)(__this->fields).ODOKIDEGENN * 2;
  if (index < (__this->fields).MONBPDGKCOM) {
    do {
      pSVar1 = (__this->fields).DGPKPHAHOJP;
      if (pSVar1 == (System_Collections_Generic_List_MBDJMJLHFOO_MJFFMMHJCNB__o *)0x0) {
LAB_035b1be0:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      index_00 = 0;
      while( true ) {
        pIVar2 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar1,index,
                            Method_System_Collections_Generic_List<MBDJMJLHFOO_MJFFMMHJCNB>_get_Item__
                           );
        if (pIVar2 == (Il2CppObject *)0x0) goto LAB_035b1be0;
        if (*(int *)&pIVar2[1].monitor <= index_00) break;
        pSVar1 = (__this->fields).DGPKPHAHOJP;
        if ((((pSVar1 == (System_Collections_Generic_List_MBDJMJLHFOO_MJFFMMHJCNB__o *)0x0) ||
             (pIVar2 = System_Collections_Generic_List<object>__get_Item
                                 ((System_Collections_Generic_List_object__o *)pSVar1,index,
                                  Method_System_Collections_Generic_List<MBDJMJLHFOO_MJFFMMHJCNB>_get_Item__
                                 ), pIVar2 == (Il2CppObject *)0x0)) ||
            (pIVar2[1].klass == (Il2CppClass *)0x0)) ||
           (__this_00 = (CNDPAJOLKFN_o *)
                        System_Collections_Generic_List<object>__get_Item
                                  ((System_Collections_Generic_List_object__o *)pIVar2[1].klass,
                                   index_00,
                                   Method_System_Collections_Generic_List<CNDPAJOLKFN>_get_Item__),
           __this_00 == (CNDPAJOLKFN_o *)0x0)) goto LAB_035b1be0;
        CNDPAJOLKFN__LFENGGKOJDO(__this_00,EDCGCMAKCOM,PFHCGPLGLHC,BCPIEFABCEC,(MethodInfo *)0x0);
        pSVar1 = (__this->fields).DGPKPHAHOJP;
        index_00 = index_00 + 1;
        if (pSVar1 == (System_Collections_Generic_List_MBDJMJLHFOO_MJFFMMHJCNB__o *)0x0)
        goto LAB_035b1be0;
      }
      index = index + 1;
    } while (index < (__this->fields).MONBPDGKCOM);
  }
  return;
}


// ===== public void FAOMJIPNHPL()  [RVA 0x34B1BE4]
// MBDJMJLHFOO$$FAOMJIPNHPL @ RVA 0x34B1BE4

void MBDJMJLHFOO__FAOMJIPNHPL(MBDJMJLHFOO_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_MBDJMJLHFOO_MJFFMMHJCNB__o *pSVar1;
  Il2CppObject *pIVar2;
  int index;
  int index_00;
  
  if ((DAT_04568565 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<CNDPAJOLKFN>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MBDJMJLHFOO_MJFFMMHJCNB>_get_Item__);
    DAT_04568565 = 1;
  }
  index = (uint)(__this->fields).ODOKIDEGENN * 2;
  if (index < (__this->fields).MONBPDGKCOM) {
    do {
      pSVar1 = (__this->fields).DGPKPHAHOJP;
      if (pSVar1 == (System_Collections_Generic_List_MBDJMJLHFOO_MJFFMMHJCNB__o *)0x0) {
LAB_035b1cd8:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      index_00 = 0;
      while( true ) {
        pIVar2 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar1,index,
                            Method_System_Collections_Generic_List<MBDJMJLHFOO_MJFFMMHJCNB>_get_Item__
                           );
        if (pIVar2 == (Il2CppObject *)0x0) goto LAB_035b1cd8;
        if (*(int *)&pIVar2[1].monitor <= index_00) break;
        pSVar1 = (__this->fields).DGPKPHAHOJP;
        if ((((pSVar1 == (System_Collections_Generic_List_MBDJMJLHFOO_MJFFMMHJCNB__o *)0x0) ||
             (pIVar2 = System_Collections_Generic_List<object>__get_Item
                                 ((System_Collections_Generic_List_object__o *)pSVar1,index,
                                  Method_System_Collections_Generic_List<MBDJMJLHFOO_MJFFMMHJCNB>_get_Item__
                                 ), pIVar2 == (Il2CppObject *)0x0)) ||
            (pIVar2[1].klass == (Il2CppClass *)0x0)) ||
           (pIVar2 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pIVar2[1].klass,
                                index_00,
                                Method_System_Collections_Generic_List<CNDPAJOLKFN>_get_Item__),
           pIVar2 == (Il2CppObject *)0x0)) goto LAB_035b1cd8;
        index_00 = index_00 + 1;
        *(float *)&pIVar2[1].klass = -*(float *)&pIVar2[1].klass;
        pSVar1 = (__this->fields).DGPKPHAHOJP;
        if (pSVar1 == (System_Collections_Generic_List_MBDJMJLHFOO_MJFFMMHJCNB__o *)0x0)
        goto LAB_035b1cd8;
      }
      index = index + 1;
    } while (index < (__this->fields).MONBPDGKCOM);
  }
  return;
}


// ===== public void IDJNOIMDGKJ(Vector3[] OCMMDIHLKMH)  [RVA 0x34B185C]
// MBDJMJLHFOO$$IDJNOIMDGKJ @ RVA 0x34B185C

void MBDJMJLHFOO__IDJNOIMDGKJ
               (MBDJMJLHFOO_o *__this,UnityEngine_Vector3_array *OCMMDIHLKMH,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  System_Collections_Generic_List_MBDJMJLHFOO_MJFFMMHJCNB__o *__this_00;
  Il2CppObject *pIVar3;
  CNDPAJOLKFN_o *__this_01;
  int iVar4;
  MethodInfo *in_x3;
  ulong uVar5;
  float *pfVar6;
  UnityEngine_Vector3_o PHCOHKNFGLE;
  
  if ((DAT_04568566 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_LJCDLMMMOGD<CNDPAJOLKFN>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MBDJMJLHFOO_MJFFMMHJCNB>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<CNDPAJOLKFN>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MBDJMJLHFOO_MJFFMMHJCNB>_get_Item__);
    DAT_04568566 = 1;
  }
  __this_00 = (__this->fields).DGPKPHAHOJP;
  iVar4 = (__this->fields).MONBPDGKCOM + 1;
  (__this->fields).MONBPDGKCOM = iVar4;
  if (__this_00 == (System_Collections_Generic_List_MBDJMJLHFOO_MJFFMMHJCNB__o *)0x0)
  goto LAB_035b19b4;
  if ((__this_00->fields)._size < iVar4) {
    if (OCMMDIHLKMH == (UnityEngine_Vector3_array *)0x0) goto LAB_035b19b4;
    MBDJMJLHFOO__LOGLJOCPFCN(__this,1,(int32_t)OCMMDIHLKMH->max_length,in_x3);
    __this_00 = (__this->fields).DGPKPHAHOJP;
    if (__this_00 == (System_Collections_Generic_List_MBDJMJLHFOO_MJFFMMHJCNB__o *)0x0)
    goto LAB_035b19b4;
  }
  pIVar3 = System_Collections_Generic_List<object>__get_Item
                     ((System_Collections_Generic_List_object__o *)__this_00,
                      (__this->fields).MONBPDGKCOM + -1,
                      Method_System_Collections_Generic_List<MBDJMJLHFOO_MJFFMMHJCNB>_get_Item__);
  if ((pIVar3 != (Il2CppObject *)0x0) && (OCMMDIHLKMH != (UnityEngine_Vector3_array *)0x0)) {
    iVar4 = (int)OCMMDIHLKMH->max_length;
    if (*(int *)&pIVar3[1].monitor != iVar4) {
      if (*(int *)&pIVar3[1].monitor < iVar4) {
        DJNBJHPDKDP__LJCDLMMMOGD<object>
                  ((System_Collections_Generic_List_T__o *)pIVar3[1].klass,iVar4,
                   Method_DJNBJHPDKDP_LJCDLMMMOGD<CNDPAJOLKFN>__);
        iVar4 = (int)OCMMDIHLKMH->max_length;
      }
      *(int *)&pIVar3[1].monitor = iVar4;
    }
    if (0 < iVar4) {
      uVar5 = 0;
      pfVar6 = &OCMMDIHLKMH->m_Items[0].fields.z;
      do {
        if (pIVar3[1].klass == (Il2CppClass *)0x0) goto LAB_035b19b4;
        __this_01 = (CNDPAJOLKFN_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)pIVar3[1].klass,
                               (int32_t)uVar5,
                               Method_System_Collections_Generic_List<CNDPAJOLKFN>_get_Item__);
        if ((uint)OCMMDIHLKMH->max_length <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        if (__this_01 == (CNDPAJOLKFN_o *)0x0) goto LAB_035b19b4;
        PHCOHKNFGLE.fields.z = *pfVar6;
        uVar1 = ((UnityEngine_Vector3_Fields *)(pfVar6 + -2))->x;
        uVar2 = ((UnityEngine_Vector3_Fields *)(pfVar6 + -2))->y;
        PHCOHKNFGLE.fields.y = (float)uVar2;
        PHCOHKNFGLE.fields.x = (float)uVar1;
        CNDPAJOLKFN__FOOHBJNHOKK(__this_01,PHCOHKNFGLE,(MethodInfo *)0x0);
        uVar5 = uVar5 + 1;
        pfVar6 = pfVar6 + 3;
      } while ((long)uVar5 < (long)(int)OCMMDIHLKMH->max_length);
    }
    return;
  }
LAB_035b19b4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int LPJNHOACLDJ()  [RVA 0x34B1CDC]
// MBDJMJLHFOO$$LPJNHOACLDJ @ RVA 0x34B1CDC

int32_t MBDJMJLHFOO__LPJNHOACLDJ(MBDJMJLHFOO_o *__this,MethodInfo *method)

{
  return (__this->fields).MONBPDGKCOM;
}


// ===== public int DDEPIEGEOGK()  [RVA 0x34B1CE4]
// MBDJMJLHFOO$$DDEPIEGEOGK @ RVA 0x34B1CE4

int32_t MBDJMJLHFOO__DDEPIEGEOGK(MBDJMJLHFOO_o *__this,MethodInfo *method)

{
  return (__this->fields).CJHIGLFGNBP;
}


// ===== public int CGBLCMEMAPH()  [RVA 0x34B1CEC]
// MBDJMJLHFOO$$CGBLCMEMAPH @ RVA 0x34B1CEC

int32_t MBDJMJLHFOO__CGBLCMEMAPH(MBDJMJLHFOO_o *__this,MethodInfo *method)

{
  return (__this->fields).MONBPDGKCOM - (__this->fields).CJHIGLFGNBP;
}


// ===== public void PIIOPLBOFKA(int DGPFDHIFHOH)  [RVA 0x34B1CF8]
// MBDJMJLHFOO$$PIIOPLBOFKA @ RVA 0x34B1CF8

void MBDJMJLHFOO__PIIOPLBOFKA(MBDJMJLHFOO_o *__this,int32_t DGPFDHIFHOH,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  MethodInfo *in_x3;
  System_Collections_Generic_List_MBDJMJLHFOO_MJFFMMHJCNB__o *pSVar2;
  int index;
  
  if ((DAT_04568567 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_LJCDLMMMOGD<CNDPAJOLKFN>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MBDJMJLHFOO_MJFFMMHJCNB>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MBDJMJLHFOO_MJFFMMHJCNB>_get_Item__);
    DAT_04568567 = 1;
  }
  pSVar2 = (__this->fields).DGPKPHAHOJP;
  (__this->fields).MONBPDGKCOM = 2;
  (__this->fields).ODOKIDEGENN = true;
  if (pSVar2 != (System_Collections_Generic_List_MBDJMJLHFOO_MJFFMMHJCNB__o *)0x0) {
    if ((1 < (pSVar2->fields)._size) ||
       (MBDJMJLHFOO__LOGLJOCPFCN(__this,2,DGPFDHIFHOH,in_x3), 0 < (__this->fields).MONBPDGKCOM)) {
      index = 0;
      do {
        pSVar2 = (__this->fields).DGPKPHAHOJP;
        if ((pSVar2 == (System_Collections_Generic_List_MBDJMJLHFOO_MJFFMMHJCNB__o *)0x0) ||
           (pIVar1 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar2,index,
                                Method_System_Collections_Generic_List<MBDJMJLHFOO_MJFFMMHJCNB>_get_Item__
                               ), pIVar1 == (Il2CppObject *)0x0)) goto LAB_035b1e00;
        if (*(int *)&pIVar1[1].monitor != DGPFDHIFHOH) {
          if (*(int *)&pIVar1[1].monitor < DGPFDHIFHOH) {
            DJNBJHPDKDP__LJCDLMMMOGD<object>
                      ((System_Collections_Generic_List_T__o *)pIVar1[1].klass,DGPFDHIFHOH,
                       Method_DJNBJHPDKDP_LJCDLMMMOGD<CNDPAJOLKFN>__);
          }
          *(int32_t *)&pIVar1[1].monitor = DGPFDHIFHOH;
        }
        index = index + 1;
      } while (index < (__this->fields).MONBPDGKCOM);
    }
    return;
  }
LAB_035b1e00:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public MBDJMJLHFOO.MJFFMMHJCNB DCGJBJFGMAB(int LKKHHMFDEML)  [RVA 0x34B1E04]
// MBDJMJLHFOO$$DCGJBJFGMAB @ RVA 0x34B1E04

MBDJMJLHFOO_MJFFMMHJCNB_o *
MBDJMJLHFOO__DCGJBJFGMAB(MBDJMJLHFOO_o *__this,int32_t LKKHHMFDEML,MethodInfo *method)

{
  System_Collections_Generic_List_MBDJMJLHFOO_MJFFMMHJCNB__o *__this_00;
  MBDJMJLHFOO_MJFFMMHJCNB_o *pMVar1;
  
  if ((DAT_04568568 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MBDJMJLHFOO_MJFFMMHJCNB>_get_Item__);
    DAT_04568568 = 1;
  }
  __this_00 = (__this->fields).DGPKPHAHOJP;
  if (__this_00 != (System_Collections_Generic_List_MBDJMJLHFOO_MJFFMMHJCNB__o *)0x0) {
    pMVar1 = (MBDJMJLHFOO_MJFFMMHJCNB_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)__this_00,
                        (__this->fields).CJHIGLFGNBP + LKKHHMFDEML,
                        Method_System_Collections_Generic_List<MBDJMJLHFOO_MJFFMMHJCNB>_get_Item__);
    return pMVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void DGLJCGNHLIG()  [RVA 0x34B1E60]
// MBDJMJLHFOO$$DGLJCGNHLIG @ RVA 0x34B1E60

void MBDJMJLHFOO__DGLJCGNHLIG(MBDJMJLHFOO_o *__this,MethodInfo *method)

{
  (__this->fields).MONBPDGKCOM = 0;
  (__this->fields).CJHIGLFGNBP = 0;
  (__this->fields).ODOKIDEGENN = false;
  return;
}

