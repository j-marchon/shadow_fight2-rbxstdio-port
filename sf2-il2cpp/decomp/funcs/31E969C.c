// MNLIBPAOCLG$$LLCCOBOLJML @ RVA 0x31E969C

UnityEngine_Transform_o * MNLIBPAOCLG__LLCCOBOLJML(MNLIBPAOCLG_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *pUVar1;
  MEHKKHFBNLM_o *pMVar2;
  
  pMVar2 = (__this->fields).DDDKDGIEBFP;
  if ((pMVar2 != (MEHKKHFBNLM_o *)0x0) &&
     (__this_00 = (pMVar2->fields)._KDDKJJLDFFO_k__BackingField,
     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    pUVar1 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    return pUVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

