// MNLIBPAOCLG$$AKDOBEJDFFH @ RVA 0x31E8504

void MNLIBPAOCLG__AKDOBEJDFFH(MNLIBPAOCLG_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_Transform_o *__this_00;
  MEHKKHFBNLM_o *pMVar3;
  NHBBOEHHEKG_o *pNVar4;
  int iVar5;
  UnityEngine_Vector3_o UVar6;
  UnityEngine_Vector3_o value;
  
  pMVar3 = (__this->fields).DDDKDGIEBFP;
  if ((pMVar3 != (MEHKKHFBNLM_o *)0x0) &&
     (pUVar1 = (pMVar3->fields)._KDDKJJLDFFO_k__BackingField,
     pUVar1 != (UnityEngine_GameObject_o *)0x0)) {
    pUVar2 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
    pNVar4 = (__this->fields).CNHHLPPHNCO;
    if ((pNVar4 != (NHBBOEHHEKG_o *)0x0) &&
       ((((pMVar3 = (pNVar4->fields).CLFNHGGJHCA, pMVar3 != (MEHKKHFBNLM_o *)0x0 &&
          (pUVar1 = (pMVar3->fields)._KDDKJJLDFFO_k__BackingField,
          pUVar1 != (UnityEngine_GameObject_o *)0x0)) &&
         (__this_00 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0),
         __this_00 != (UnityEngine_Transform_o *)0x0)) &&
        (UVar6 = UnityEngine_Transform__get_localScale(__this_00,(MethodInfo *)0x0),
        pUVar2 != (UnityEngine_Transform_o *)0x0)))) {
      UnityEngine_Transform__set_localScale(pUVar2,UVar6,(MethodInfo *)0x0);
      pNVar4 = (__this->fields).CNHHLPPHNCO;
      if ((((pNVar4 != (NHBBOEHHEKG_o *)0x0) &&
           (pMVar3 = (pNVar4->fields).CLFNHGGJHCA, pMVar3 != (MEHKKHFBNLM_o *)0x0)) &&
          (pUVar1 = (pMVar3->fields)._KDDKJJLDFFO_k__BackingField,
          pUVar1 != (UnityEngine_GameObject_o *)0x0)) &&
         (pUVar2 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_Transform_o *)0x0)) {
        UVar6 = UnityEngine_Transform__get_localPosition(pUVar2,(MethodInfo *)0x0);
        pMVar3 = (__this->fields).DDDKDGIEBFP;
        if ((pMVar3 != (MEHKKHFBNLM_o *)0x0) &&
           (pUVar1 = (pMVar3->fields)._KDDKJJLDFFO_k__BackingField,
           pUVar1 != (UnityEngine_GameObject_o *)0x0)) {
          iVar5 = (pMVar3->fields).MFDBACKNCKL;
          pUVar2 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
          if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
            value.fields.z = (float)iVar5;
            value.fields.x = (float)(int)UVar6.fields._0_8_;
            value.fields.y = (float)(int)((ulong)UVar6.fields._0_8_ >> 0x20);
            UnityEngine_Transform__set_localPosition(pUVar2,value,(MethodInfo *)0x0);
            pMVar3 = (__this->fields).DDDKDGIEBFP;
            if (pMVar3 != (MEHKKHFBNLM_o *)0x0) {
              MEHKKHFBNLM__BDHAMOEKNNK(pMVar3,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

