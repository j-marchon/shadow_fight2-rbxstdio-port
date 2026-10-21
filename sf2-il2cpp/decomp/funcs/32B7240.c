// KHEDNGODOIC$$HNLNLFDOGPM @ RVA 0x32B7240

void KHEDNGODOIC__HNLNLFDOGPM(KHEDNGODOIC_o *__this,float IDBMGJFGIJH,MethodInfo *method)

{
  PKNBJJPHAKI_o *pPVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_Transform_o *parent;
  
  pPVar1 = (__this->fields).BAFJNPPPBMK;
  if (pPVar1 != (PKNBJJPHAKI_o *)0x0) {
    PKNBJJPHAKI__GIENGNEGHPJ(pPVar1,IDBMGJFGIJH,(MethodInfo *)0x0);
    pPVar1 = (__this->fields).BAFJNPPPBMK;
    if ((pPVar1 != (PKNBJJPHAKI_o *)0x0) &&
       (pUVar2 = (pPVar1->fields).LDAKOINICNJ, pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      pUVar3 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
      pUVar2 = (__this->fields).LDAKOINICNJ;
      if ((pUVar2 != (UnityEngine_GameObject_o *)0x0) &&
         (parent = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0),
         pUVar3 != (UnityEngine_Transform_o *)0x0)) {
        UnityEngine_Transform__SetParent(pUVar3,parent,false,(MethodInfo *)0x0);
        pPVar1 = (__this->fields).BAFJNPPPBMK;
        if (((pPVar1 != (PKNBJJPHAKI_o *)0x0) &&
            (pUVar2 = (pPVar1->fields).LDAKOINICNJ, pUVar2 != (UnityEngine_GameObject_o *)0x0)) &&
           (pUVar3 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0),
           pUVar3 != (UnityEngine_Transform_o *)0x0)) {
          UnityEngine_Transform__set_localPosition
                    (pUVar3,(UnityEngine_Vector3_o)ZEXT812(0),(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

