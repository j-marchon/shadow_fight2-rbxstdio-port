// EIABCPKDEBD$$KPODFFHOHGK @ RVA 0x3134014

System_Xml_XmlNode_o *
EIABCPKDEBD__KPODFFHOHGK
          (System_Xml_XmlNode_o *JHMENEKPIBO,System_String_o *BCPAFBNLBDE,MethodInfo *method)

{
  long *plVar1;
  System_Xml_XmlNode_o *pSVar2;
  
  if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
                    /* catch() { ... } // from try @ 03234004 with catch @ 03234030 */
    plVar1 = (long *)(*(JHMENEKPIBO->klass->vtable)._17_get_OwnerDocument.methodPtr)
                               (JHMENEKPIBO,
                                (JHMENEKPIBO->klass->vtable)._17_get_OwnerDocument.method);
    if (plVar1 != (long *)0x0) {
                    /* try { // try from 03234040 to 03334047 has its CatchHandler @ 0323405c */
                    /* try { // try from 03234048 to 03334053 has its CatchHandler @ 032331f0 */
                    /* try { // try from 03234054 to 0333405b has its CatchHandler @ 0323405c */
      pSVar2 = (System_Xml_XmlNode_o *)
               (**(code **)(*plVar1 + 0x678))
                         (plVar1,1,BCPAFBNLBDE,0,*(undefined8 *)(*plVar1 + 0x680));
                    /* catch() { ... } // from try @ 03233f5c with catch @ 0323405c
                       catch() { ... } // from try @ 03234040 with catch @ 0323405c
                       catch() { ... } // from try @ 03234054 with catch @ 0323405c */
      (*(JHMENEKPIBO->klass->vtable)._27_AppendChild.methodPtr)
                (JHMENEKPIBO,pSVar2,(JHMENEKPIBO->klass->vtable)._27_AppendChild.method);
      return pSVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

