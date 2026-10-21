// EIABCPKDEBD$$DGPOFACHGMP @ RVA 0x3133E0C

void EIABCPKDEBD__DGPOFACHGMP
               (System_Xml_XmlNode_o *JHMENEKPIBO,System_Xml_XmlAttribute_o *JOHFLOEABJL,
               MethodInfo *method)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  System_Xml_XmlNode_c *pSVar4;
  
  if ((DAT_045666ed & 1) == 0) {
    FUN_01bab630(&System_Xml_XmlElement_TypeInfo);
    DAT_045666ed = 1;
  }
  if (JOHFLOEABJL != (System_Xml_XmlAttribute_o *)0x0) {
                    /* try { // try from 03233e44 to 03333e47 has its CatchHandler @ 03233fc8 */
    uVar2 = (*(JOHFLOEABJL->klass->vtable)._8_get_Name.methodPtr)
                      (JOHFLOEABJL,(JOHFLOEABJL->klass->vtable)._8_get_Name.method);
                    /* try { // try from 03233e50 to 03333e53 has its CatchHandler @ 03233fc4 */
                    /* try { // try from 03233e5c to 03333e6b has its CatchHandler @ 03233fd0 */
    uVar3 = (*(JOHFLOEABJL->klass->vtable)._9_get_Value.methodPtr)
                      (JOHFLOEABJL,(JOHFLOEABJL->klass->vtable)._9_get_Value.method);
    if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
      pSVar4 = JHMENEKPIBO->klass;
                    /* try { // try from 03233e74 to 03333e77 has its CatchHandler @ 03233fb0 */
      bVar1 = (System_Xml_XmlElement_TypeInfo->_2).naturalAligment;
                    /* try { // try from 03233e80 to 03333e83 has its CatchHandler @ 03233fac */
                    /* try { // try from 03233e8c to 03333e8f has its CatchHandler @ 03233fa8 */
                    /* try { // try from 03233e98 to 03333e9b has its CatchHandler @ 03233fa4 */
      if ((bVar1 <= (pSVar4->_2).naturalAligment) &&
         ((pSVar4->_2).typeHierarchy[(ulong)bVar1 - 1] ==
          (Il2CppClass *)System_Xml_XmlElement_TypeInfo)) {
                    /* try { // try from 03233ea4 to 03333ea7 has its CatchHandler @ 03233fa0 */
                    /* try { // try from 03233eb0 to 03333eb3 has its CatchHandler @ 03233f9c */
                    /* WARNING: Could not recover jumptable at 0x03233eb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pSVar4[1]._1.byval_arg.data)
                  (JHMENEKPIBO,uVar2,uVar3,*(undefined8 *)&pSVar4[1]._1.byval_arg.bits);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(JHMENEKPIBO);
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03233ebc to 03333ebf has its CatchHandler @ 03233f94 */
  FUN_01bab8c8();
}

