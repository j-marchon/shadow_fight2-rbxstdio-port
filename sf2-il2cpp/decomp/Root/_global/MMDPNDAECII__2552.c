// TypeDefIndex 2552
// Namespace: 
// public class MMDPNDAECII
// Fields:
//   private float PLLMHJOMBIE; // 0x10
//   private int LMIMAJBNOIL; // 0x14
//   private float EGLKIPHJCDL; // 0x18
//   private float HFAFMEICFLA; // 0x1C
//   private GBJGJEGPHKD HMIAFJALFCJ; // 0x20
//   private bool BNHJIKJAHHF; // 0x28
//   private List<string> MJBOGDFFGKL; // 0x30
//   private int AGHCNFGKHCH; // 0x38

// ===== public int GIDBPKKFOBE()  [RVA 0x33999D8]
// MMDPNDAECII$$GIDBPKKFOBE @ RVA 0x33999D8

int32_t MMDPNDAECII__GIDBPKKFOBE(MMDPNDAECII_o *__this,MethodInfo *method)

{
  return (__this->fields).AGHCNFGKHCH;
}


// ===== private void IPLOAGNCEHJ()  [RVA 0x33999E0]
// MMDPNDAECII$$IPLOAGNCEHJ @ RVA 0x33999E0

void MMDPNDAECII__IPLOAGNCEHJ(MMDPNDAECII_o *__this,MethodInfo *method)

{
  GBJGJEGPHKD_o *pGVar1;
  System_Collections_Generic_List_IEFEBEDLHNN__o *__this_00;
  IEFEBEDLHNN_o *__this_01;
  MethodInfo *method_00;
  int index;
  float ONAOBFPPMAL;
  
  if ((DAT_04567c6d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<IEFEBEDLHNN>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IEFEBEDLHNN>_get_Item__);
    DAT_04567c6d = 1;
  }
  pGVar1 = (__this->fields).HMIAFJALFCJ;
  if ((pGVar1 != (GBJGJEGPHKD_o *)0x0) &&
     (__this_00 = GBJGJEGPHKD__HMAAHELNECD(pGVar1,(MethodInfo *)0x0),
     __this_00 != (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0)) {
    if (0 < (__this_00->fields)._size) {
      index = 0;
      do {
        __this_01 = (IEFEBEDLHNN_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)__this_00,index,
                               Method_System_Collections_Generic_List<IEFEBEDLHNN>_get_Item__);
        if (__this_01 == (IEFEBEDLHNN_o *)0x0) goto LAB_03499ad0;
        if ((__this_01->fields).MCKFLABMNAK == false) {
          if (((__this->fields).BNHJIKJAHHF == false) && ((__this_01->fields).LAIDIGOPNLB == false))
          {
            pGVar1 = (__this->fields).HMIAFJALFCJ;
            if (pGVar1 == (GBJGJEGPHKD_o *)0x0) goto LAB_03499ad0;
            if (((pGVar1->fields).FJHAMMNKBPN == false) ||
               ((__this_01->fields).FJHAMMNKBPN == false)) goto LAB_03499a90;
          }
          ONAOBFPPMAL = MMDPNDAECII__OLIPOLKMNGL(__this,method_00);
          IEFEBEDLHNN__IPLOAGNCEHJ(__this_01,ONAOBFPPMAL,(MethodInfo *)0x0);
        }
LAB_03499a90:
        index = index + 1;
      } while (index < (__this_00->fields)._size);
    }
    return;
  }
LAB_03499ad0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public float OLIPOLKMNGL()  [RVA 0x3399AD4]
// MMDPNDAECII$$OLIPOLKMNGL @ RVA 0x3399AD4

float MMDPNDAECII__OLIPOLKMNGL(MMDPNDAECII_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  int32_t iVar2;
  OLKKAIFGGAK_o *pOVar3;
  GBJGJEGPHKD_o *pGVar4;
  float fVar5;
  
  if (DAT_04567c95 == '\0') {
    FUN_01bab630(&EBGMOLCMOHK_TypeInfo);
    DAT_04567c95 = '\x01';
  }
  pGVar4 = (__this->fields).HMIAFJALFCJ;
  if ((pGVar4 != (GBJGJEGPHKD_o *)0x0) &&
     (pOVar3 = (pGVar4->fields).KOHECBJAFKG, pOVar3 != (OLKKAIFGGAK_o *)0x0)) {
    fVar5 = EBGMOLCMOHK_TypeInfo->static_fields->CEICIBAGEFP;
    iVar1 = OLKKAIFGGAK__HEOILELLFLL(pOVar3,(MethodInfo *)0x0);
    pGVar4 = (__this->fields).HMIAFJALFCJ;
    if ((pGVar4 != (GBJGJEGPHKD_o *)0x0) &&
       (pOVar3 = (pGVar4->fields).KOHECBJAFKG, pOVar3 != (OLKKAIFGGAK_o *)0x0)) {
      iVar2 = OLKKAIFGGAK__HEOILELLFLL(pOVar3,(MethodInfo *)0x0);
      return fVar5 / (float)(iVar2 * iVar1);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool BFENLJFANDC()  [RVA 0x3399B6C]
// MMDPNDAECII$$BFENLJFANDC @ RVA 0x3399B6C

bool MMDPNDAECII__BFENLJFANDC(MMDPNDAECII_o *__this,MethodInfo *method)

{
  return (__this->fields).BNHJIKJAHHF;
}


// ===== public void BDHAMOEKNNK()  [RVA 0x3399B74]
// MMDPNDAECII$$BDHAMOEKNNK @ RVA 0x3399B74

void MMDPNDAECII__BDHAMOEKNNK(MMDPNDAECII_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  
  MMDPNDAECII__IPLOAGNCEHJ(__this,method);
  MMDPNDAECII__MKCLHFFLJCO(__this,method_00);
  if ((__this->fields).BNHJIKJAHHF != false) {
    (__this->fields).AGHCNFGKHCH = (__this->fields).AGHCNFGKHCH + 1;
  }
  return;
}


// ===== public void IELLEFEFFJD(List<string> FPEHEJBLCAO)  [RVA 0x3399D44]
// MMDPNDAECII$$IELLEFEFFJD @ RVA 0x3399D44

void MMDPNDAECII__IELLEFEFFJD
               (MMDPNDAECII_o *__this,System_Collections_Generic_List_string__o *FPEHEJBLCAO,
               MethodInfo *method)

{
  int32_t length;
  GBJGJEGPHKD_o *__this_00;
  System_Collections_Generic_List_string__o *pSVar1;
  
  if ((DAT_04567c6e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Clear__);
    DAT_04567c6e = 1;
  }
  pSVar1 = (__this->fields).MJBOGDFFGKL;
  (__this->fields).BNHJIKJAHHF = true;
  (__this->fields).AGHCNFGKHCH = 0;
  if (pSVar1 != (System_Collections_Generic_List_string__o *)0x0) {
    length = (pSVar1->fields)._size;
    (pSVar1->fields)._size = 0;
    (pSVar1->fields)._version = (pSVar1->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar1->fields)._items,0,length,(MethodInfo *)0x0);
    }
    if (FPEHEJBLCAO != (System_Collections_Generic_List_string__o *)0x0) {
      pSVar1 = (__this->fields).MJBOGDFFGKL;
      if (pSVar1 == (System_Collections_Generic_List_string__o *)0x0) goto LAB_03499df0;
      System_Collections_Generic_List<object>__AddRange
                ((System_Collections_Generic_List_object__o *)pSVar1,
                 (System_Collections_Generic_IEnumerable_T__o *)FPEHEJBLCAO,
                 Method_System_Collections_Generic_List<string>_AddRange__);
    }
    __this_00 = (__this->fields).HMIAFJALFCJ;
    if (__this_00 != (GBJGJEGPHKD_o *)0x0) {
      GBJGJEGPHKD__GLMFAHPICHD(__this_00,(MethodInfo *)0x0);
      return;
    }
  }
LAB_03499df0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void MKCLHFFLJCO()  [RVA 0x3399BA4]
// MMDPNDAECII$$MKCLHFFLJCO @ RVA 0x3399BA4

void MMDPNDAECII__MKCLHFFLJCO(MMDPNDAECII_o *__this,MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  bool bVar3;
  GBJGJEGPHKD_o *pGVar4;
  System_Collections_Generic_List_IEFEBEDLHNN__o *__this_00;
  System_Collections_Generic_List_GEBHIBIEAJE__o *__this_01;
  IEFEBEDLHNN_o *__this_02;
  GEBHIBIEAJE_o *PGHNHNDHEPF;
  MethodInfo *method_00;
  bool_conflict bVar5;
  int iVar6;
  int iVar7;
  
  if ((DAT_04567c6f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<GEBHIBIEAJE>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IEFEBEDLHNN>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IEFEBEDLHNN>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GEBHIBIEAJE>_get_Item__);
    DAT_04567c6f = 1;
  }
  pGVar4 = (__this->fields).HMIAFJALFCJ;
  if (pGVar4 != (GBJGJEGPHKD_o *)0x0) {
    bVar2 = (pGVar4->fields).FJHAMMNKBPN;
    __this_00 = GBJGJEGPHKD__HMAAHELNECD(pGVar4,(MethodInfo *)0x0);
    pGVar4 = (__this->fields).HMIAFJALFCJ;
    if ((pGVar4 != (GBJGJEGPHKD_o *)0x0) &&
       (__this_01 = GBJGJEGPHKD__MPGCPFKOCOB(pGVar4,(MethodInfo *)0x0),
       __this_00 != (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0)) {
      iVar6 = (__this_00->fields)._size;
      if (0 < iVar6) {
        iVar7 = 0;
        do {
          __this_02 = (IEFEBEDLHNN_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)__this_00,iVar7,
                                 Method_System_Collections_Generic_List<IEFEBEDLHNN>_get_Item__);
          if (__this_02 == (IEFEBEDLHNN_o *)0x0) goto LAB_03499d40;
          bVar3 = IEFEBEDLHNN__GEJMNCILEGJ(__this_02,(MethodInfo *)0x0);
          if ((bVar3) && ((__this_02->fields).MCKFLABMNAK == false)) {
            if ((__this->fields).BNHJIKJAHHF == false) {
              bVar5 = (__this_02->fields).LAIDIGOPNLB;
              if ((bVar2 != false) && (bVar5 == false)) {
                bVar5 = (__this_02->fields).FJHAMMNKBPN;
              }
            }
            else {
              bVar5 = true;
            }
          }
          else {
            bVar5 = false;
          }
          iVar7 = iVar7 + 1;
          (__this_02->fields).EKMNMODEKKP = bVar5;
        } while (iVar6 != iVar7);
      }
      iVar6 = (__this->fields).LMIMAJBNOIL;
      if (0 < iVar6) {
        if (__this_01 == (System_Collections_Generic_List_GEBHIBIEAJE__o *)0x0) goto LAB_03499d40;
        iVar7 = 0;
        do {
          iVar1 = (__this_01->fields)._size;
          if (0 < iVar1) {
            iVar6 = 0;
            do {
              method_00 = Method_System_Collections_Generic_List<GEBHIBIEAJE>_get_Item__;
              PGHNHNDHEPF = (GEBHIBIEAJE_o *)
                            System_Collections_Generic_List<object>__get_Item
                                      ((System_Collections_Generic_List_object__o *)__this_01,iVar6,
                                       (MethodInfo_26E4ADC *)
                                       Method_System_Collections_Generic_List<GEBHIBIEAJE>_get_Item__
                                      );
              if (bVar2 == false) {
LAB_03499d04:
                MMDPNDAECII__MPLGBEILHIP(__this,PGHNHNDHEPF,method_00);
              }
              else {
                if (PGHNHNDHEPF == (GEBHIBIEAJE_o *)0x0) goto LAB_03499d40;
                if ((PGHNHNDHEPF->fields).GGCKJHKNEAM == false) goto LAB_03499d04;
              }
              iVar6 = iVar6 + 1;
            } while (iVar1 != iVar6);
            iVar6 = (__this->fields).LMIMAJBNOIL;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar6);
      }
      return;
    }
  }
LAB_03499d40:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void EABJNHKPJOM()  [RVA 0x3399E70]
// MMDPNDAECII$$EABJNHKPJOM @ RVA 0x3399E70

void MMDPNDAECII__EABJNHKPJOM(MMDPNDAECII_o *__this,MethodInfo *method)

{
  (__this->fields).BNHJIKJAHHF = false;
  (__this->fields).AGHCNFGKHCH = 0;
  return;
}


// ===== public void LHAKAHHIMLN(float PEOMJHJICCM, float GKBCJOEFFCP)  [RVA 0x3399E7C]
// MMDPNDAECII$$LHAKAHHIMLN @ RVA 0x3399E7C

void MMDPNDAECII__LHAKAHHIMLN
               (MMDPNDAECII_o *__this,float PEOMJHJICCM,float GKBCJOEFFCP,MethodInfo *method)

{
  (__this->fields).EGLKIPHJCDL = PEOMJHJICCM;
  (__this->fields).HFAFMEICFLA = GKBCJOEFFCP;
  return;
}


// ===== private void KAGPEIPPDHB(IEFEBEDLHNN AHDGNOJPPIB)  [RVA 0x3399E84]
// MMDPNDAECII$$KAGPEIPPDHB @ RVA 0x3399E84

void MMDPNDAECII__KAGPEIPPDHB(MMDPNDAECII_o *__this,IEFEBEDLHNN_o *AHDGNOJPPIB,MethodInfo *method)

{
  CNDPAJOLKFN_o *__this_00;
  CNDPAJOLKFN_o *pCVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (AHDGNOJPPIB != (IEFEBEDLHNN_o *)0x0) {
    if (((AHDGNOJPPIB->fields).EMNCOJMFLLK != false) &&
       ((__this->fields).EGLKIPHJCDL != (__this->fields).HFAFMEICFLA)) {
      __this_00 = (AHDGNOJPPIB->fields).CNMHHKAMGPI;
      if ((__this_00 == (CNDPAJOLKFN_o *)0x0) ||
         (pCVar1 = (AHDGNOJPPIB->fields).BJKKHONDAKP, pCVar1 == (CNDPAJOLKFN_o *)0x0))
      goto LAB_03499f28;
      fVar5 = (pCVar1->fields).super.OHHDBINAJCB;
      fVar4 = (__this_00->fields).super.JOLEIODMLFL;
      fVar3 = (__this_00->fields).PPOPAMHBMGG;
      fVar6 = (pCVar1->fields).PPOPAMHBMGG;
      fVar2 = (__this_00->fields).super.OHHDBINAJCB;
      fVar7 = (__this->fields).PLLMHJOMBIE;
      (__this_00->fields).super.OHHDBINAJCB = fVar5;
      fVar3 = fVar3 - fVar6;
      fVar2 = fVar2 - fVar5;
      fVar4 = fVar4 * fVar7;
      fVar5 = fVar2 * fVar2 + fVar3 * fVar3;
      (__this_00->fields).super.JOLEIODMLFL = 0.0;
      (__this_00->fields).PPOPAMHBMGG = fVar6;
      if (fVar4 * fVar4 < fVar5) {
        fVar4 = 1.0 - fVar4 / SQRT(fVar5);
        CNDPAJOLKFN__LFENGGKOJDO(__this_00,fVar2 * fVar4,0.0,fVar3 * fVar4,(MethodInfo *)0x0);
        return;
      }
    }
    return;
  }
LAB_03499f28:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void IIHMOINCCLH(IEFEBEDLHNN AHDGNOJPPIB)  [RVA 0x3399F2C]
// MMDPNDAECII$$IIHMOINCCLH @ RVA 0x3399F2C

void MMDPNDAECII__IIHMOINCCLH(MMDPNDAECII_o *__this,IEFEBEDLHNN_o *AHDGNOJPPIB,MethodInfo *method)

{
  CNDPAJOLKFN_o *pCVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if ((AHDGNOJPPIB != (IEFEBEDLHNN_o *)0x0) &&
     (pCVar1 = (AHDGNOJPPIB->fields).CNMHHKAMGPI, pCVar1 != (CNDPAJOLKFN_o *)0x0)) {
    if (0.0 <= (pCVar1->fields).super.JOLEIODMLFL) {
      MMDPNDAECII__KAGPEIPPDHB(__this,AHDGNOJPPIB,method);
    }
    fVar3 = (__this->fields).EGLKIPHJCDL;
    fVar2 = (__this->fields).HFAFMEICFLA;
    if (fVar3 != fVar2) {
      fVar4 = (pCVar1->fields).super.OHHDBINAJCB;
      if (fVar3 <= fVar4) {
        if (fVar2 < fVar4) {
          (pCVar1->fields).super.OHHDBINAJCB = fVar2;
        }
      }
      else {
        (pCVar1->fields).super.OHHDBINAJCB = fVar3;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void FGKNGBKIKFG(float PMNEDONNDLF)  [RVA 0x3399F94]
// MMDPNDAECII$$FGKNGBKIKFG @ RVA 0x3399F94

void MMDPNDAECII__FGKNGBKIKFG(MMDPNDAECII_o *__this,float PMNEDONNDLF,MethodInfo *method)

{
  bool bVar1;
  GBJGJEGPHKD_o *pGVar2;
  System_Collections_Generic_List_IEFEBEDLHNN__o *__this_00;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_04567c70 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IEFEBEDLHNN>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IEFEBEDLHNN>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IEFEBEDLHNN>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IEFEBEDLHNN>_GetEnumerator__);
    DAT_04567c70 = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  pGVar2 = (__this->fields).HMIAFJALFCJ;
  if ((pGVar2 == (GBJGJEGPHKD_o *)0x0) ||
     (__this_00 = GBJGJEGPHKD__HMAAHELNECD(pGVar2,(MethodInfo *)0x0),
     __this_00 == (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_68,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<IEFEBEDLHNN>_GetEnumerator__);
  local_50.fields._index = local_68.fields._index;
  local_50.fields._version = local_68.fields._version;
  local_50.fields._list = local_68.fields._list;
  local_50.fields._current = local_68.fields._current;
LAB_0349a040:
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_50,
                       Method_System_Collections_Generic_List_Enumerator<IEFEBEDLHNN>_MoveNext__);
    if (!bVar1) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_50,Method_System_Collections_Generic_List_Enumerator<IEFEBEDLHNN>_Dispose__)
      ;
      return;
    }
    if ((IEFEBEDLHNN_o *)local_50.fields._current == (IEFEBEDLHNN_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  } while (((IEFEBEDLHNN_Fields *)((long)local_50.fields._current + 0x10))->MCKFLABMNAK != false);
  if (((__this->fields).BNHJIKJAHHF == false) &&
     (((IEFEBEDLHNN_Fields *)((long)local_50.fields._current + 0x10))->LAIDIGOPNLB == false))
  goto LAB_0349a084;
  goto LAB_0349a070;
LAB_0349a084:
  pGVar2 = (__this->fields).HMIAFJALFCJ;
  if (pGVar2 == (GBJGJEGPHKD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (((pGVar2->fields).FJHAMMNKBPN != false) &&
     (((IEFEBEDLHNN_Fields *)((long)local_50.fields._current + 0x10))->FJHAMMNKBPN != false)) {
LAB_0349a070:
    IEFEBEDLHNN__FGKNGBKIKFG
              ((IEFEBEDLHNN_o *)local_50.fields._current,PMNEDONNDLF,(MethodInfo *)0x0);
  }
  goto LAB_0349a040;
}


// ===== private void MPLGBEILHIP(GEBHIBIEAJE PGHNHNDHEPF)  [RVA 0x3399DF4]
// MMDPNDAECII$$MPLGBEILHIP @ RVA 0x3399DF4

void MMDPNDAECII__MPLGBEILHIP(MMDPNDAECII_o *__this,GEBHIBIEAJE_o *PGHNHNDHEPF,MethodInfo *method)

{
  IEFEBEDLHNN_o *AHDGNOJPPIB;
  IEFEBEDLHNN_o *AHDGNOJPPIB_00;
  
  if ((PGHNHNDHEPF == (GEBHIBIEAJE_o *)0x0) ||
     (AHDGNOJPPIB = (PGHNHNDHEPF->fields)._HDEPMIOPNAJ_k__BackingField,
     AHDGNOJPPIB == (IEFEBEDLHNN_o *)0x0)) {
LAB_03499e6c:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  AHDGNOJPPIB_00 = (PGHNHNDHEPF->fields)._GNLFCODFOOM_k__BackingField;
  if ((AHDGNOJPPIB->fields).EKMNMODEKKP == false) {
    if (AHDGNOJPPIB_00 == (IEFEBEDLHNN_o *)0x0) goto LAB_03499e6c;
    if ((AHDGNOJPPIB_00->fields).EKMNMODEKKP == false) {
      return;
    }
  }
  else {
    MMDPNDAECII__IIHMOINCCLH(__this,AHDGNOJPPIB,method);
    if (AHDGNOJPPIB_00 == (IEFEBEDLHNN_o *)0x0) goto LAB_03499e6c;
    if ((AHDGNOJPPIB_00->fields).EKMNMODEKKP == false) goto LAB_03499e4c;
  }
  MMDPNDAECII__IIHMOINCCLH(__this,AHDGNOJPPIB_00,method);
LAB_03499e4c:
  GEBHIBIEAJE__DOCFNLBLJFO(PGHNHNDHEPF,(MethodInfo *)0x0);
  return;
}


// ===== public void .ctor(GBJGJEGPHKD NCNGALIAHJL)  [RVA 0x339A14C]
// MMDPNDAECII$$.ctor @ RVA 0x339A14C

void MMDPNDAECII___ctor(MMDPNDAECII_o *__this,GBJGJEGPHKD_o *NCNGALIAHJL,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this_00;
  System_Collections_Generic_List_string__o **ppSVar1;
  EBGMOLCMOHK_StaticFields *pEVar2;
  GBJGJEGPHKD_o **ppGVar3;
  
  if ((DAT_04567c71 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_04567c71 = 1;
  }
  __this_00 = (System_Collections_Generic_List_string__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<string>__ctor__);
  ppSVar1 = &(__this->fields).MJBOGDFFGKL;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
                    /* try { // try from 0349a1c4 to 0359a277 has its CatchHandler @ 0349a1c4
                       catch() { ... } // from try @ 0349a1c4 with catch @ 0349a1c4
                       catch() { ... } // from try @ 0349a2a0 with catch @ 0349a1c4
                       catch() { ... } // from try @ 0349a304 with catch @ 0349a1c4
                       catch() { ... } // from try @ 0349a344 with catch @ 0349a1c4 */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  ppGVar3 = &(__this->fields).HMIAFJALFCJ;
  *ppGVar3 = NCNGALIAHJL;
  (__this->fields).EGLKIPHJCDL = 0.0;
  (__this->fields).HFAFMEICFLA = 0.0;
  thunk_FUN_01c20e04(ppGVar3,NCNGALIAHJL);
  (__this->fields).BNHJIKJAHHF = false;
  (__this->fields).AGHCNFGKHCH = 0;
  if (DAT_04567c96 == '\0') {
    FUN_01bab630(&EBGMOLCMOHK_TypeInfo);
    DAT_04567c96 = '\x01';
  }
  pEVar2 = EBGMOLCMOHK_TypeInfo->static_fields;
  (__this->fields).LMIMAJBNOIL = pEVar2->NBPIFEDENED;
  if (DAT_04567c97 == '\0') {
    FUN_01bab630(&EBGMOLCMOHK_TypeInfo);
    DAT_04567c97 = '\x01';
    pEVar2 = EBGMOLCMOHK_TypeInfo->static_fields;
  }
  (__this->fields).PLLMHJOMBIE = pEVar2->DBIHPEGBLNF;
  return;
}


// ===== public List<string> PLBHIOPFIDJ()  [RVA 0x339A260]
// MMDPNDAECII$$PLBHIOPFIDJ @ RVA 0x339A260

System_Collections_Generic_List_string__o *
MMDPNDAECII__PLBHIOPFIDJ(MMDPNDAECII_o *__this,MethodInfo *method)

{
  return (__this->fields).MJBOGDFFGKL;
}

