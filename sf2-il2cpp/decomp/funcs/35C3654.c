// GCAKLDNBADP$$ToString @ RVA 0x35C3654

System_String_o * GCAKLDNBADP__ToString(GCAKLDNBADP_o __this,MethodInfo *method)

{
  undefined4 *puVar1;
  Il2CppObject *arg0;
  Il2CppObject *arg1;
  Il2CppObject *arg2;
  System_String_o *pSVar2;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  puVar1 = __this.fields._0_8_;
                    /* try { // try from 036c365c to 037c3683 has its CatchHandler @ 036c34ec */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036c360c with catch @ 036c3660
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036c35bc with catch @ 036c3664
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036c364c with catch @ 036c366c
                        */
  if ((DAT_04568f51 & 1) == 0) {
                    /* try { // try from 036c3684 to 037c3687 has its CatchHandler @ 036c36a8 */
                    /* try { // try from 036c3688 to 037c36af has its CatchHandler @ 036c34ec */
    FUN_01bab630(&float_TypeInfo,__this.fields._8_8_);
    FUN_01bab630(&StringLiteral_22325);
    DAT_04568f51 = 1;
  }
  local_34 = *puVar1;
                    /* catch() { ... } // from try @ 036c3684 with catch @ 036c36a8 */
                    /* try { // try from 036c36b0 to 037c36b7 has its CatchHandler @ 036c36cc */
  arg0 = (Il2CppObject *)thunk_FUN_01bda448(float_TypeInfo,&local_34);
                    /* try { // try from 036c36b8 to 037c36c3 has its CatchHandler @ 036c34ec */
  local_38 = puVar1[1];
                    /* try { // try from 036c36c4 to 037c36cb has its CatchHandler @ 036c36cc */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 036c36b0 with catch @ 036c36cc
                       catch(type#2 @ 00000000) { ... } // from try @ 036c36c4 with catch @ 036c36cc
                        */
  arg1 = (Il2CppObject *)thunk_FUN_01bda448(float_TypeInfo,&local_38);
  local_3c = puVar1[2];
  arg2 = (Il2CppObject *)thunk_FUN_01bda448(float_TypeInfo,&local_3c);
  pSVar2 = System_String__Format(StringLiteral_22325,arg0,arg1,arg2,(MethodInfo *)0x0);
  return pSVar2;
}

