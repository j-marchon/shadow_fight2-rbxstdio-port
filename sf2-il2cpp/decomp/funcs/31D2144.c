// IIHMKHNLJKD$$ADDMPKLDGEF @ RVA 0x31D2144

bool IIHMKHNLJKD__ADDMPKLDGEF
               (IIHMKHNLJKD_o *__this,System_Xml_XmlAttribute_o *HIHEKNNCALP,
               System_Xml_XmlAttribute_o *JEAAOOJOCBD,System_Xml_XmlAttribute_o *HCAKAIDBOHA,
               MethodInfo *method)

{
  long *plVar1;
  
  if (HIHEKNNCALP == (System_Xml_XmlAttribute_o *)0x0) {
    if (JEAAOOJOCBD == (System_Xml_XmlAttribute_o *)0x0 &&
        HCAKAIDBOHA == (System_Xml_XmlAttribute_o *)0x0) {
      return false;
    }
  }
  else {
    plVar1 = (long *)(*(HIHEKNNCALP->klass->vtable)._65_get_OwnerElement.methodPtr)
                               (HIHEKNNCALP,(HIHEKNNCALP->klass->vtable)._65_get_OwnerElement.method
                               );
    if (plVar1 == (long *)0x0) goto LAB_032d220c;
    (**(code **)(*plVar1 + 0x588))(plVar1,HIHEKNNCALP,*(undefined8 *)(*plVar1 + 0x590));
  }
  if (JEAAOOJOCBD != (System_Xml_XmlAttribute_o *)0x0) {
    plVar1 = (long *)(*(JEAAOOJOCBD->klass->vtable)._65_get_OwnerElement.methodPtr)
                               (JEAAOOJOCBD,(JEAAOOJOCBD->klass->vtable)._65_get_OwnerElement.method
                               );
    if (plVar1 == (long *)0x0) goto LAB_032d220c;
    (**(code **)(*plVar1 + 0x588))(plVar1,JEAAOOJOCBD,*(undefined8 *)(*plVar1 + 0x590));
  }
  if (HCAKAIDBOHA != (System_Xml_XmlAttribute_o *)0x0) {
    plVar1 = (long *)(*(HCAKAIDBOHA->klass->vtable)._65_get_OwnerElement.methodPtr)
                               (HCAKAIDBOHA,(HCAKAIDBOHA->klass->vtable)._65_get_OwnerElement.method
                               );
    if (plVar1 == (long *)0x0) {
LAB_032d220c:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    (**(code **)(*plVar1 + 0x588))(plVar1,HCAKAIDBOHA,*(undefined8 *)(*plVar1 + 0x590));
  }
  return true;
}

