// GIAMPEGMNHE$$LFCNNAGLPHO @ RVA 0x330E150

System_String_o *
GIAMPEGMNHE__LFCNNAGLPHO
          (System_Xml_XmlAttribute_o *LBJNDMNEJJB,System_String_o *HBFDLMOKDGA,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (LBJNDMNEJJB != (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0340e15c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pSVar1 = (System_String_o *)
             (*(LBJNDMNEJJB->klass->vtable)._9_get_Value.methodPtr)
                       (LBJNDMNEJJB,(LBJNDMNEJJB->klass->vtable)._9_get_Value.method);
    return pSVar1;
  }
  return HBFDLMOKDGA;
}

