// MGNPHCAAEIO$$HLFLDFDKDFN @ RVA 0x33FC294

float MGNPHCAAEIO__HLFLDFDKDFN(AFFHKININGD_o *MHOFCOHFCGL,MethodInfo *method)

{
  int32_t length;
  int iVar1;
  MethodInfo *method_00;
  PJKHAJKEHEL_o *pPVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Collections_Generic_List_PJKHAJKEHEL__o *OKBIKHHKOEN;
  float fVar3;
  
  if ((DAT_04567fc3 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<PJKHAJKEHEL>_Clear__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04567fc3 = 1;
    method = extraout_x1;
  }
  if (MHOFCOHFCGL != (AFFHKININGD_o *)0x0) {
    OKBIKHHKOEN = (MHOFCOHFCGL->fields).MECHOBPGHFJ;
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      method = extraout_x1_00;
    }
    method_00 = (MethodInfo *)MGNPHCAAEIO__EKOMOGPCHCN(OKBIKHHKOEN,method);
    pPVar2 = MGNPHCAAEIO__MGLPJIGMCHH(method_00);
    if ((pPVar2 != (PJKHAJKEHEL_o *)0x0) &&
       (pPVar2 = PJKHAJKEHEL__FAOBHLCDKJI(pPVar2,(MethodInfo *)0x0), pPVar2 != (PJKHAJKEHEL_o *)0x0)
       ) {
      (*(pPVar2->klass->vtable)._7_LBNKPLKIIOP.methodPtr)
                (pPVar2,(pPVar2->klass->vtable)._7_LBNKPLKIIOP.method);
      fVar3 = AFFHKININGD__PINMGKELLJI
                        (MHOFCOHFCGL,pPVar2,
                         (System_Collections_Generic_List_PJKHAJKEHEL__o *)method_00,
                         (MethodInfo *)0x0);
      if (method_00 != (MethodInfo *)0x0) {
        length = *(int32_t *)&method_00->name;
        iVar1 = *(int *)((long)&method_00->name + 4);
        *(undefined4 *)&method_00->name = 0;
        *(int *)((long)&method_00->name + 4) = iVar1 + 1;
        if (0 < length) {
          System_Array__Clear((System_Array_o *)method_00->invoker_method,0,length,(MethodInfo *)0x0
                             );
        }
        return fVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

