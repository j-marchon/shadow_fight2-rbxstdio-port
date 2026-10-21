// IGFGDDANEPE$$PHEAFMPDJEM @ RVA 0x30A3F7C

void IGFGDDANEPE__PHEAFMPDJEM(IGFGDDANEPE_o *__this,AMJMGFCCAKN_o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Xml_XmlElement_o *pSVar1;
  System_String_o *pSVar2;
  AMJMGFCCAKN_o *extraout_x1;
  AMJMGFCCAKN_o *method_00;
  GGLKHCAIGDI_o *pGVar3;
  AMJMGFCCAKN_o **ppAVar4;
  int64_t local_30;
  int32_t local_24;
  
  method_00 = CJNHFNHJHPE;
  if ((DAT_04566160 & 1) == 0) {
    FUN_01bab630(&StringLiteral_11107);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_10317);
    FUN_01bab630(&StringLiteral_5292);
    FUN_01bab630(&StringLiteral_8108);
    DAT_04566160 = 1;
    method_00 = extraout_x1;
  }
  local_30 = 0;
  if ((__this->fields).MMNCAIGLMJB == false) {
    return;
  }
  IGFGDDANEPE__ECPOIIMILFO(__this,(MethodInfo *)method_00);
  ppAVar4 = &(__this->fields).HJLEJIJKJKD;
  *ppAVar4 = CJNHFNHJHPE;
  thunk_FUN_01c20e04(ppAVar4,CJNHFNHJHPE);
  pSVar1 = EIABCPKDEBD__BHPIHHJHELJ
                     ((__this->fields).DMLGJFCNNJF,StringLiteral_11107,(MethodInfo *)0x0);
  if (((*ppAVar4 != (AMJMGFCCAKN_o *)0x0) &&
      (pGVar3 = ((*ppAVar4)->fields).PHAGOJCOMPN, pGVar3 != (GGLKHCAIGDI_o *)0x0)) &&
     (pSVar1 != (System_Xml_XmlElement_o *)0x0)) {
    (*(pSVar1->klass->vtable)._66_SetAttribute.methodPtr)
              (pSVar1,StringLiteral_9327,(pGVar3->fields)._COIPKAKHDFP_k__BackingField,
               (pSVar1->klass->vtable)._66_SetAttribute.method);
    if (*ppAVar4 != (AMJMGFCCAKN_o *)0x0) {
      local_24 = ((*ppAVar4)->fields).PFNIFGEBIAC;
      pSVar2 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
      (*(pSVar1->klass->vtable)._66_SetAttribute.methodPtr)
                (pSVar1,StringLiteral_8108,pSVar2,(pSVar1->klass->vtable)._66_SetAttribute.method);
      if (*ppAVar4 != (AMJMGFCCAKN_o *)0x0) {
        local_24 = ((*ppAVar4)->fields).BMPFHIJEDOD;
        pSVar2 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
        (*(pSVar1->klass->vtable)._66_SetAttribute.methodPtr)
                  (pSVar1,StringLiteral_10317,pSVar2,(pSVar1->klass->vtable)._66_SetAttribute.method
                  );
        if (*ppAVar4 != (AMJMGFCCAKN_o *)0x0) {
          local_30 = ((*ppAVar4)->fields).CJKLJJIMECK;
          pSVar2 = System_Int64__ToString((int64_t)&local_30,(MethodInfo *)0x0);
          (*(pSVar1->klass->vtable)._66_SetAttribute.methodPtr)
                    (pSVar1,StringLiteral_5292,pSVar2,
                     (pSVar1->klass->vtable)._66_SetAttribute.method);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

