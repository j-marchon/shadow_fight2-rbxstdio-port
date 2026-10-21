// NGKBNOEJLPH$$MICDGNKHCOB @ RVA 0x34960C4

int32_t NGKBNOEJLPH__MICDGNKHCOB
                  (NGKBNOEJLPH_o *__this,OPNFCOGALLI_o *HCMNFMBFDNG,
                  System_Collections_Generic_List_MGNDHCBAPEN_string__List_OANGEOLKMJG____o
                  *FHJOEOFAFLA,MethodInfo *method)

{
  int32_t iVar1;
  Il2CppObject *pIVar2;
  System_Predicate_T__o *match;
  MethodInfo *method_00;
  
  if ((DAT_0456844a & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_List<OANGEOLKMJG>>>_Find__
                );
    FUN_01bab630(&Method_NGKBNOEJLPH_OCHGKPIBCNO_MODHDGFBHMF__);
    FUN_01bab630(&NGKBNOEJLPH_OCHGKPIBCNO_TypeInfo);
    FUN_01bab630(&System_Predicate<MGNDHCBAPEN<string,_List<OANGEOLKMJG>>>_TypeInfo);
    DAT_0456844a = 1;
  }
  pIVar2 = (Il2CppObject *)thunk_FUN_01bda818(NGKBNOEJLPH_OCHGKPIBCNO_TypeInfo);
  System_Object___ctor(pIVar2,(MethodInfo *)0x0);
  if ((HCMNFMBFDNG != (OPNFCOGALLI_o *)0x0) && (pIVar2 != (Il2CppObject *)0x0)) {
    pIVar2 = pIVar2 + 1;
    pIVar2->klass = (Il2CppClass *)(HCMNFMBFDNG->fields).NDBPNFLAKDL;
    thunk_FUN_01c20e04(pIVar2);
    if (pIVar2->klass != (Il2CppClass *)0x0) {
      match = (System_Predicate_T__o *)
              thunk_FUN_01bda818(System_Predicate<MGNDHCBAPEN<string,_List<OANGEOLKMJG>>>_TypeInfo);
      System_Predicate<object>___ctor();
      if (FHJOEOFAFLA ==
          (System_Collections_Generic_List_MGNDHCBAPEN_string__List_OANGEOLKMJG____o *)0x0)
      goto LAB_035961d8;
      method_00 = 
      Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_List<OANGEOLKMJG>>>_Find__;
      pIVar2 = System_Collections_Generic_List<object>__Find
                         ((System_Collections_Generic_List_object__o *)FHJOEOFAFLA,match,
                          (MethodInfo_26E5414 *)
                          Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_List<OANGEOLKMJG>>>_Find__
                         );
      if (pIVar2 != (Il2CppObject *)0x0) {
        iVar1 = NGKBNOEJLPH__FGFKLCPJJJI(__this,pIVar2[1].monitor,method_00);
        return iVar1;
      }
    }
    return 0;
  }
LAB_035961d8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

