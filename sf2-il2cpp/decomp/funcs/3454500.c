// CLFCKIFNGHA$$GMENDOGOHMH @ RVA 0x3454500

/* WARNING: Removing unreachable block (ram,0x0355460c) */

void CLFCKIFNGHA__GMENDOGOHMH(IAGNPGHOAIC_o *IEKGHPACLPF,bool CNADELPLGPE,MethodInfo *method)

{
  System_Collections_Generic_List_IAGNPGHOAIC__o *__this;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Collections_Generic_List_IAGNPGHOAIC__o *obj;
  bool local_34 [4];
  
  method_00 = (MethodInfo *)(ulong)CNADELPLGPE;
  if ((DAT_045682bf & 1) == 0) {
    FUN_01bab630(&CLFCKIFNGHA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IAGNPGHOAIC>_Remove__);
    DAT_045682bf = 1;
    method_00 = extraout_x1;
  }
  if ((CLFCKIFNGHA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method_00 = extraout_x1_00;
  }
  CLFCKIFNGHA__FKCGNCCEFCH(IEKGHPACLPF,method_00);
  obj = CLFCKIFNGHA_TypeInfo->static_fields->FIDBAGOJPKB;
  local_34[0] = false;
  System_Threading_Monitor__Enter((Il2CppObject *)obj,local_34,(MethodInfo *)0x0);
  if ((CLFCKIFNGHA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = CLFCKIFNGHA_TypeInfo->static_fields->FIDBAGOJPKB;
  if (__this == (System_Collections_Generic_List_IAGNPGHOAIC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__Remove
            ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)IEKGHPACLPF,
             Method_System_Collections_Generic_List<IAGNPGHOAIC>_Remove__);
  if (local_34[0] != false) {
    System_Threading_Monitor__Exit((Il2CppObject *)obj,(MethodInfo *)0x0);
  }
  if (IEKGHPACLPF == (IAGNPGHOAIC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  IAGNPGHOAIC__BMMOAFKFHNN(IEKGHPACLPF,true,(MethodInfo *)0x0);
  if (CNADELPLGPE) {
    IAGNPGHOAIC__GMPIHBHDDLJ(IEKGHPACLPF,(MethodInfo *)0x0);
  }
  return;
}

