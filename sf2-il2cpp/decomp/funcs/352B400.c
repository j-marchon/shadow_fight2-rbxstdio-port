// ALJBCELIEHC.<>c$$JLPKNOPCPFD @ RVA 0x352B400

bool ALJBCELIEHC_<>c__JLPKNOPCPFD(ALJBCELIEHC___c_o *__this,NFEOGKEAFHL_o *x,MethodInfo *method)

{
  System_Collections_Generic_List_int__o *pSVar1;
  
  if ((DAT_04568a24 & 1) == 0) {
    __this = (ALJBCELIEHC___c_o *)
             FUN_01bab630(&Method_System_Collections_Generic_List<int>_get_Count__);
    DAT_04568a24 = 1;
  }
  if ((x != (NFEOGKEAFHL_o *)0x0) &&
     (pSVar1 = (x->fields).GPNNHMIJLGL, pSVar1 != (System_Collections_Generic_List_int__o *)0x0)) {
    return (pSVar1->fields)._size == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

