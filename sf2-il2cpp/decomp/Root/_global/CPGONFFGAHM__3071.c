// TypeDefIndex 3071
// Namespace: 
// public class CPGONFFGAHM
// Fields:
//   private GBJGJEGPHKD LOOBCEJBJAO; // 0x10

// ===== public void .ctor(GBJGJEGPHKD NCNGALIAHJL)  [RVA 0x34C5100]
// CPGONFFGAHM$$.ctor @ RVA 0x34C5100

void CPGONFFGAHM___ctor(CPGONFFGAHM_o *__this,GBJGJEGPHKD_o *NCNGALIAHJL,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).LOOBCEJBJAO = NCNGALIAHJL;
  thunk_FUN_01c20e04(&__this->fields,NCNGALIAHJL);
  return;
}


// ===== public void HKFEABKNICO(GEBHIBIEAJE PGHNHNDHEPF, CNDPAJOLKFN EKEMKOCPHPO, CNDPAJOLKFN PCGIENAHMFK)  [RVA 0x34C5130]
// CPGONFFGAHM$$HKFEABKNICO @ RVA 0x34C5130

void CPGONFFGAHM__HKFEABKNICO
               (CPGONFFGAHM_o *__this,GEBHIBIEAJE_o *PGHNHNDHEPF,CNDPAJOLKFN_o *EKEMKOCPHPO,
               CNDPAJOLKFN_o *PCGIENAHMFK,MethodInfo *method)

{
  CNDPAJOLKFN_o *__this_00;
  GEBHIBIEAJE_o *extraout_x1;
  GEBHIBIEAJE_o *method_00;
  CNDPAJOLKFN_o *PHCOHKNFGLE;
  IEFEBEDLHNN_o *__this_01;
  CNDPAJOLKFN_o *pCVar1;
  IEFEBEDLHNN_o *pIVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  method_00 = PGHNHNDHEPF;
  if ((DAT_0456862f & 1) == 0) {
    FUN_01bab630(&CNDPAJOLKFN_TypeInfo);
    DAT_0456862f = 1;
    method_00 = extraout_x1;
  }
  if (PGHNHNDHEPF != (GEBHIBIEAJE_o *)0x0) {
    CPGONFFGAHM__DPDEMPFEJEB(__this,(MethodInfo *)method_00);
    pIVar2 = (PGHNHNDHEPF->fields)._HDEPMIOPNAJ_k__BackingField;
    if (pIVar2 == (IEFEBEDLHNN_o *)0x0) goto LAB_035c52f4;
    __this_01 = (PGHNHNDHEPF->fields)._GNLFCODFOOM_k__BackingField;
    if ((pIVar2->fields).MCAILHLELHB == false) {
      if (__this_01 == (IEFEBEDLHNN_o *)0x0) goto LAB_035c52f4;
    }
    else {
      if (__this_01 == (IEFEBEDLHNN_o *)0x0) goto LAB_035c52f4;
      if ((__this_01->fields).MCAILHLELHB != false) {
        return;
      }
    }
    pCVar1 = (pIVar2->fields).CNMHHKAMGPI;
    PHCOHKNFGLE = (__this_01->fields).CNMHHKAMGPI;
    fVar3 = PKHLGDMJPMF__PAMPGOGMIJN
                      ((PGHNHNDHEPF->fields)._HMIPFMPCHII_k__BackingField,
                       (PGHNHNDHEPF->fields)._MHGCPMPILGC_k__BackingField,(MethodInfo *)0x0);
    fVar4 = PKHLGDMJPMF__PAMPGOGMIJN((pIVar2->fields).CNMHHKAMGPI,EKEMKOCPHPO,(MethodInfo *)0x0);
    fVar5 = 1.0;
    if (fVar4 <= fVar3) {
      fVar5 = fVar4 / fVar3;
    }
    if ((pIVar2->fields).MCKFLABMNAK == false) {
      fVar3 = IEFEBEDLHNN__NODBECJPBDC(pIVar2,(MethodInfo *)0x0);
      __this_00 = (CNDPAJOLKFN_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo);
      CNDPAJOLKFN___ctor(__this_00,PCGIENAHMFK,(MethodInfo *)0x0);
      if (__this_00 == (CNDPAJOLKFN_o *)0x0) goto LAB_035c52f4;
      CNDPAJOLKFN__PGLILPKGILI(__this_00,(1.0 - fVar5) / fVar3,(MethodInfo *)0x0);
      CNDPAJOLKFN__LFENGGKOJDO(__this_00,pCVar1,(MethodInfo *)0x0);
      pIVar2 = (PGHNHNDHEPF->fields)._HDEPMIOPNAJ_k__BackingField;
      if (pIVar2 == (IEFEBEDLHNN_o *)0x0) goto LAB_035c52f4;
      IEFEBEDLHNN__AGOEHONIGBH(pIVar2,__this_00,(MethodInfo *)0x0);
    }
    if ((__this_01->fields).MCKFLABMNAK == false) {
      fVar3 = IEFEBEDLHNN__NODBECJPBDC(__this_01,(MethodInfo *)0x0);
      pCVar1 = (CNDPAJOLKFN_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo);
      CNDPAJOLKFN___ctor(pCVar1,PCGIENAHMFK,(MethodInfo *)0x0);
      if (pCVar1 != (CNDPAJOLKFN_o *)0x0) {
        CNDPAJOLKFN__PGLILPKGILI(pCVar1,fVar5 / fVar3,(MethodInfo *)0x0);
        CNDPAJOLKFN__LFENGGKOJDO(pCVar1,PHCOHKNFGLE,(MethodInfo *)0x0);
        pIVar2 = (PGHNHNDHEPF->fields)._GNLFCODFOOM_k__BackingField;
        if (pIVar2 != (IEFEBEDLHNN_o *)0x0) {
          IEFEBEDLHNN__AGOEHONIGBH(pIVar2,pCVar1,(MethodInfo *)0x0);
          return;
        }
      }
LAB_035c52f4:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}


// ===== private void DPDEMPFEJEB()  [RVA 0x34C52F8]
// CPGONFFGAHM$$DPDEMPFEJEB @ RVA 0x34C52F8

void CPGONFFGAHM__DPDEMPFEJEB(CPGONFFGAHM_o *__this,MethodInfo *method)

{
  bool bVar1;
  GBJGJEGPHKD_o *__this_00;
  System_Collections_Generic_List_IEFEBEDLHNN__o *__this_01;
  Il2CppClass *__this_02;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_04568630 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IEFEBEDLHNN>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IEFEBEDLHNN>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IEFEBEDLHNN>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IEFEBEDLHNN>_GetEnumerator__);
    DAT_04568630 = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).LOOBCEJBJAO;
  if ((__this_00 != (GBJGJEGPHKD_o *)0x0) &&
     (__this_01 = GBJGJEGPHKD__HMAAHELNECD(__this_00,(MethodInfo *)0x0),
     __this_01 != (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<IEFEBEDLHNN>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<IEFEBEDLHNN>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_38,
                   Method_System_Collections_Generic_List_Enumerator<IEFEBEDLHNN>_Dispose__);
        return;
      }
      if (local_38.fields._current == (Il2CppObject *)0x0) break;
      __this_02 = local_38.fields._current[4].klass;
      if (__this_02 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      CNDPAJOLKFN__LFENGGKOJDO
                ((CNDPAJOLKFN_o *)__this_02,local_38.fields._current[3].monitor,(MethodInfo *)0x0);
      CNDPAJOLKFN__PGLILPKGILI((CNDPAJOLKFN_o *)__this_02,0.5,(MethodInfo *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

