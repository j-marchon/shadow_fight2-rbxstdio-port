// MEHKKHFBNLM$$EKPGACDAEJO @ RVA 0x3392858

void MEHKKHFBNLM__EKPGACDAEJO
               (MEHKKHFBNLM_o *__this,UnityEngine_GameObject_o *DDGLJFLLACC,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_Transform_o *parent;
  UnityEngine_GameObject_o *__this_00;
  
  if (DDGLJFLLACC != (UnityEngine_GameObject_o *)0x0) {
    pUVar1 = UnityEngine_GameObject__get_transform(DDGLJFLLACC,(MethodInfo *)0x0);
    __this_00 = (__this->fields)._KDDKJJLDFFO_k__BackingField;
    if ((__this_00 != (UnityEngine_GameObject_o *)0x0) &&
       (parent = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0),
       pUVar1 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__SetParent(pUVar1,parent,false,(MethodInfo *)0x0);
      pUVar1 = UnityEngine_GameObject__get_transform(DDGLJFLLACC,(MethodInfo *)0x0);
      UnityEngine_TransformExtensions__SetLocalPositionZ
                (pUVar1,(__this->fields).DDMDFBAPLHJ,(MethodInfo *)0x0);
      (__this->fields).DDMDFBAPLHJ = (__this->fields).DDMDFBAPLHJ + -0.01;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

