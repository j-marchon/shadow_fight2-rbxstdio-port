// MMDDDDFHOLG$$ELNCLIIJFDB @ RVA 0x3361D24

void MMDDDDFHOLG__ELNCLIIJFDB
               (MMDDDDFHOLG_o *__this,EHCCNKFIPPA_o *GFHKAOIMLHG,OLKKAIFGGAK_o *IGMNBGIAGGK,
               NKPJLEMPIKD_GBBCKIANDCN_o *PHCGJGCHKCM,NJPBBPOABKP_o *AEDJMMHJIEH,bool JDALPBMBDDO,
               MethodInfo *method)

{
  bool bVar1;
  PHDCILJMEHO_o *pPVar2;
  IGJEEGBBNFC_o *pIVar3;
  HEFOANCOHDC_o *pHVar4;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_Collections_Generic_List_string__o *FPEHEJBLCAO;
  
  method_01 = (MethodInfo *)(ulong)JDALPBMBDDO;
  method_00 = (MethodInfo *)PHCGJGCHKCM;
  if ((DAT_04567a88 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_04567a88 = 1;
  }
  if ((AEDJMMHJIEH != (NJPBBPOABKP_o *)0x0) && (GFHKAOIMLHG != (EHCCNKFIPPA_o *)0x0)) {
    pPVar2 = EHCCNKFIPPA__NBJIHGJNPGI
                       (GFHKAOIMLHG,(AEDJMMHJIEH->fields)._MEFGNAIILBJ_k__BackingField,
                        (MethodInfo *)0x0);
    if ((pPVar2 != (PHDCILJMEHO_o *)0x0) && ((pPVar2->fields).KFCEKOBOKJJ != false)) {
      pIVar3 = MMDDDDFHOLG__MDEAJBFLJGP
                         (__this,(GFHKAOIMLHG->fields)._HKPEJNKNEGG_k__BackingField,
                          (AEDJMMHJIEH->fields)._MEFGNAIILBJ_k__BackingField,method_00);
      if (pIVar3 == (IGJEEGBBNFC_o *)0x0) {
        FPEHEJBLCAO = (System_Collections_Generic_List_string__o *)
                      thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
        System_Collections_Generic_List<object>___ctor
                  ((System_Collections_Generic_List_object__o *)FPEHEJBLCAO,
                   Method_System_Collections_Generic_List<string>__ctor__);
      }
      else {
        FPEHEJBLCAO = (pIVar3->fields).HFICCAMAMGI;
      }
      pHVar4 = (AEDJMMHJIEH->fields)._MEFGNAIILBJ_k__BackingField;
      if (pHVar4 == (HEFOANCOHDC_o *)0x0) goto LAB_03461e5c;
      (pHVar4->fields)._BGCNGEAHHFN_k__BackingField =
           (GFHKAOIMLHG->fields)._HKPEJNKNEGG_k__BackingField;
      thunk_FUN_01c20e04();
      if (((PHCGJGCHKCM == (NKPJLEMPIKD_GBBCKIANDCN_o *)0x0) ||
          (bVar1 = NJPBBPOABKP__AFFNOKFNKON(AEDJMMHJIEH,PHCGJGCHKCM,(MethodInfo *)0x0), bVar1)) &&
         (bVar1 = NJPBBPOABKP__JENPGIOLJAJ
                            (AEDJMMHJIEH,(GFHKAOIMLHG->fields)._HKPEJNKNEGG_k__BackingField,
                             FPEHEJBLCAO,(MethodInfo *)0x0), bVar1)) {
        MMDDDDFHOLG__IKDPMKOIDMP(__this,GFHKAOIMLHG,IGMNBGIAGGK,AEDJMMHJIEH,JDALPBMBDDO,method_01);
        return;
      }
    }
    return;
  }
LAB_03461e5c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

