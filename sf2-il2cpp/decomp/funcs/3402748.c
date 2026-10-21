// MGNPHCAAEIO$$DCOFAPICGBA @ RVA 0x3402748

System_Collections_Generic_List_KCLPNDAPADO__o *
MGNPHCAAEIO__DCOFAPICGBA(int32_t CNONPGEIGJM,MethodInfo *method)

{
  System_Collections_Generic_List_KCLPNDAPADO__o *LKHHJJJFHGN;
  MGNPHCAAEIO_c *method_00;
  PJKHAJKEHEL_o *pPVar1;
  MethodInfo *method_01;
  System_Collections_Generic_List_HEFOANCOHDC__o *GJBLBEALOBO;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568000 & 1) == 0) {
    FUN_01bab630(&LDHBHPILNMA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<KCLPNDAPADO>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<KCLPNDAPADO>_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04568000 = 1;
    method = extraout_x1;
  }
  LKHHJJJFHGN = (System_Collections_Generic_List_KCLPNDAPADO__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<KCLPNDAPADO>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)LKHHJJJFHGN,
             Method_System_Collections_Generic_List<KCLPNDAPADO>__ctor__);
  method_00 = MGNPHCAAEIO_TypeInfo;
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (MGNPHCAAEIO_c *)thunk_FUN_01ba7564();
  }
  pPVar1 = MGNPHCAAEIO__MGLPJIGMCHH((MethodInfo *)method_00);
  if (pPVar1 != (PJKHAJKEHEL_o *)0x0) {
    method_01 = (MethodInfo *)
                (*(pPVar1->klass->vtable)._5_ACBMLHJIFMD.methodPtr)
                          (pPVar1,(pPVar1->klass->vtable)._5_ACBMLHJIFMD.method);
    pPVar1 = MGNPHCAAEIO__MGLPJIGMCHH(method_01);
    if (pPVar1 != (PJKHAJKEHEL_o *)0x0) {
      GJBLBEALOBO = PJKHAJKEHEL__BMDDFABHHCA(pPVar1,(MethodInfo *)0x0);
      if ((LDHBHPILNMA_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(LDHBHPILNMA_TypeInfo);
      }
      LDHBHPILNMA__HCJKEAKOFEP
                (LKHHJJJFHGN,(System_Collections_Generic_List_HOOAAGABMBL__o *)method_01,false,
                 (System_Collections_Generic_List_string__o *)0x0,GJBLBEALOBO,CNONPGEIGJM,
                 (MethodInfo *)0x0);
      return LKHHJJJFHGN;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

