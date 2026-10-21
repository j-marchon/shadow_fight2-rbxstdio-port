// EIABCPKDEBD$$LKPNNANEJKF @ RVA 0x31350AC

void EIABCPKDEBD__LKPNNANEJKF
               (System_Xml_XmlNode_o *JHMENEKPIBO,System_String_o *PNOCDIDLLLM,MethodInfo *method)

{
  long lVar1;
  
  if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03235048 with catch @ 032350bc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03234f68 with catch @ 032350c0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03235038 with catch @ 032350c4
                        */
    lVar1 = (*(JHMENEKPIBO->klass->vtable)._51_get_Item.methodPtr)
                      (JHMENEKPIBO,PNOCDIDLLLM,(JHMENEKPIBO->klass->vtable)._51_get_Item.method);
    if (lVar1 != 0) {
                    /* try { // try from 032350dc to 033350df has its CatchHandler @ 03235100 */
                    /* try { // try from 032350e0 to 03335107 has its CatchHandler @ 03234c64 */
                    /* WARNING: Could not recover jumptable at 0x032350e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(JHMENEKPIBO->klass->vtable)._25_RemoveChild.methodPtr)
                (JHMENEKPIBO,lVar1,(JHMENEKPIBO->klass->vtable)._25_RemoveChild.method);
      return;
    }
  }
  return;
}

