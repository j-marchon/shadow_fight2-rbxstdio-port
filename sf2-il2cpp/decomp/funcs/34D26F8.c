// JBCGDIEHOHH$$.ctor @ RVA 0x34D26F8

void JBCGDIEHOHH___ctor(JBCGDIEHOHH_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,uint16_t JDIHKNKFJMK
                       ,uint16_t EHEFEIEKHJO,MethodInfo *method)

{
  MCCHIAKPFEL_o *pMVar1;
  System_Xml_XmlNode_o *pSVar2;
  
  if ((DAT_045686c1 & 1) == 0) {
    FUN_01bab630(&MCCHIAKPFEL_TypeInfo);
    FUN_01bab630(&StringLiteral_5624);
    FUN_01bab630(&StringLiteral_9572);
    DAT_045686c1 = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  pMVar1 = (MCCHIAKPFEL_o *)thunk_FUN_01bda818(MCCHIAKPFEL_TypeInfo);
  MCCHIAKPFEL___ctor(pMVar1,AHDGNOJPPIB,JDIHKNKFJMK,EHEFEIEKHJO,(MethodInfo *)0x0);
  (__this->fields).KGPGBOHAFOL = pMVar1;
  thunk_FUN_01c20e04(&__this->fields,pMVar1);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlNode_o *)
             (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                       (AHDGNOJPPIB,StringLiteral_9572,
                        (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
    if (pSVar2 == (System_Xml_XmlNode_o *)0x0) {
      (__this->fields).FJKBLKIBABM = (MCCHIAKPFEL_o *)0x0;
      pMVar1 = (MCCHIAKPFEL_o *)0x0;
    }
    else {
      pMVar1 = (MCCHIAKPFEL_o *)thunk_FUN_01bda818(MCCHIAKPFEL_TypeInfo);
      MCCHIAKPFEL___ctor(pMVar1,pSVar2,JDIHKNKFJMK,EHEFEIEKHJO,(MethodInfo *)0x0);
      (__this->fields).FJKBLKIBABM = pMVar1;
    }
    thunk_FUN_01c20e04(&(__this->fields).FJKBLKIBABM,pMVar1);
    pSVar2 = (System_Xml_XmlNode_o *)
             (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                       (AHDGNOJPPIB,StringLiteral_5624,
                        (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
    if (pSVar2 == (System_Xml_XmlNode_o *)0x0) {
      (__this->fields).PHIFOIKLPLI = (MCCHIAKPFEL_o *)0x0;
      pMVar1 = (MCCHIAKPFEL_o *)0x0;
    }
    else {
      pMVar1 = (MCCHIAKPFEL_o *)thunk_FUN_01bda818(MCCHIAKPFEL_TypeInfo);
      MCCHIAKPFEL___ctor(pMVar1,pSVar2,JDIHKNKFJMK,EHEFEIEKHJO,(MethodInfo *)0x0);
      (__this->fields).PHIFOIKLPLI = pMVar1;
    }
    thunk_FUN_01c20e04(&(__this->fields).PHIFOIKLPLI,pMVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

