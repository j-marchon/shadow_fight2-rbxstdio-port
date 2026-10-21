// KHEDNGODOIC$$GIENGNEGHPJ @ RVA 0x32B769C

void KHEDNGODOIC__GIENGNEGHPJ(KHEDNGODOIC_o *__this,NHBBOEHHEKG_o *LBKOHHHPNIP,MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  MethodInfo *method_00;
  MEHKKHFBNLM_o *pMVar4;
  UnityEngine_Vector3_o UVar5;
  UnityEngine_Vector3_o OCHLLMNLADJ;
  
  if (LBKOHHHPNIP != (NHBBOEHHEKG_o *)0x0) {
    KHEDNGODOIC__HNLNLFDOGPM(__this,(LBKOHHHPNIP->fields).IDBMGJFGIJH,(MethodInfo *)LBKOHHHPNIP);
    KHEDNGODOIC__JGDMBLPAHIN(__this,(LBKOHHHPNIP->fields).IDBMGJFGIJH,method_00);
    pUVar1 = (__this->fields).LDAKOINICNJ;
    if ((pUVar1 != (UnityEngine_GameObject_o *)0x0) &&
       (pUVar2 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_Transform_o *)0x0)) {
      UVar5.fields.y = (LBKOHHHPNIP->fields).IDBMGJFGIJH + (LBKOHHHPNIP->fields).DAPHCPICAAC * -0.5;
      UVar5.fields.x = (LBKOHHHPNIP->fields).NMFKJBOAOLK * -0.5;
      UVar5.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition(pUVar2,UVar5,(MethodInfo *)0x0);
      pUVar1 = (__this->fields).LDAKOINICNJ;
      if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
        pUVar2 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
        pMVar4 = (LBKOHHHPNIP->fields).CLFNHGGJHCA;
        if (((pMVar4 != (MEHKKHFBNLM_o *)0x0) &&
            (pUVar1 = (pMVar4->fields)._KDDKJJLDFFO_k__BackingField,
            pUVar1 != (UnityEngine_GameObject_o *)0x0)) &&
           (pUVar3 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0),
           pUVar2 != (UnityEngine_Transform_o *)0x0)) {
          UnityEngine_Transform__SetParent(pUVar2,pUVar3,false,(MethodInfo *)0x0);
          pUVar1 = (__this->fields).LDAKOINICNJ;
          if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
            pUVar2 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
            pUVar1 = (__this->fields).LDAKOINICNJ;
            if ((pUVar1 != (UnityEngine_GameObject_o *)0x0) &&
               (pUVar3 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0),
               pUVar3 != (UnityEngine_Transform_o *)0x0)) {
              UVar5 = UnityEngine_Transform__get_localScale(pUVar3,(MethodInfo *)0x0);
              OCHLLMNLADJ.fields.z = 1.0;
              OCHLLMNLADJ.fields.x = 1.0;
              OCHLLMNLADJ.fields.y = -1.0;
              UVar5 = Util__EFCELKPKECC(UVar5,OCHLLMNLADJ,(MethodInfo *)0x0);
              if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                UnityEngine_Transform__set_localScale(pUVar2,UVar5,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

