// TypeDefIndex 931
// Namespace: 
// [CompilerGenerated]
// private sealed class IGFGDDANEPE.JDFPAGJHCKG
// Fields:
//   public IGFGDDANEPE <>4__this; // 0x10
//   public bool removeNodes; // 0x18

// ===== internal void KKBIOGGBOIP(HEFOANCOHDC x)  [RVA 0x30A674C]
// IGFGDDANEPE.JDFPAGJHCKG$$KKBIOGGBOIP @ RVA 0x30A674C

void IGFGDDANEPE_JDFPAGJHCKG__KKBIOGGBOIP
               (IGFGDDANEPE_JDFPAGJHCKG_o *__this,HEFOANCOHDC_o *x,MethodInfo *method)

{
  bool bVar1;
  IGFGDDANEPE_JDFPAGJHCKG_o *pIVar2;
  System_Collections_Generic_List_HEFOANCOHDC__o *__this_00;
  System_Xml_XmlNode_o *pSVar3;
  IGFGDDANEPE_JDFPAGJHCKG_o *JHMENEKPIBO;
  IGFGDDANEPE_o *pIVar4;
  
  pIVar2 = __this;
  if ((DAT_04566170 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_Remove__);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_5703/*"Enchantments"*/);
    pIVar2 = (IGFGDDANEPE_JDFPAGJHCKG_o *)FUN_01bab630(&StringLiteral_10213/*"Perk"*/);
    DAT_04566170 = 1;
  }
  pIVar4 = (__this->fields).__4__this;
  if ((pIVar4 != (IGFGDDANEPE_o *)0x0) &&
     (__this_00 = (pIVar4->fields).PAPANCDPPIF, pIVar2 = (IGFGDDANEPE_JDFPAGJHCKG_o *)0x0,
     __this_00 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0)) {
    bVar1 = System_Collections_Generic_List<object>__Remove
                      ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)x,
                       Method_System_Collections_Generic_List<HEFOANCOHDC>_Remove__);
    if ((__this->fields).removeNodes == false) {
      return;
    }
    pIVar4 = (__this->fields).__4__this;
    pIVar2 = (IGFGDDANEPE_JDFPAGJHCKG_o *)(ulong)bVar1;
    if ((pIVar4 != (IGFGDDANEPE_o *)0x0) &&
       (pSVar3 = (pIVar4->fields).DMLGJFCNNJF, pIVar2 = (IGFGDDANEPE_JDFPAGJHCKG_o *)0x0,
       pSVar3 != (System_Xml_XmlNode_o *)0x0)) {
      JHMENEKPIBO = (IGFGDDANEPE_JDFPAGJHCKG_o *)
                    (*(pSVar3->klass->vtable)._51_get_Item.methodPtr)
                              (pSVar3,StringLiteral_5703/*"Enchantments"*/,(pSVar3->klass->vtable)._51_get_Item.method
                              );
      pIVar2 = JHMENEKPIBO;
      if ((x != (HEFOANCOHDC_o *)0x0) &&
         (pIVar2 = (IGFGDDANEPE_JDFPAGJHCKG_o *)
                   EIABCPKDEBD__MHJPHEMBOLK
                             ((System_Xml_XmlNode_o *)JHMENEKPIBO,StringLiteral_10213/*"Perk"*/,
                              StringLiteral_9327/*"Name"*/,(x->fields).JIJLBFGKNJK,(MethodInfo *)0x0),
         JHMENEKPIBO != (IGFGDDANEPE_JDFPAGJHCKG_o *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x031a6844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)JHMENEKPIBO->klass[1].vtable._1_Finalize.method)
                  (JHMENEKPIBO,pIVar2,JHMENEKPIBO->klass[1].vtable._2_GetHashCode.methodPtr);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(pIVar2);
}


// ===== public void .ctor()  [RVA 0x30A6310]
// IGFGDDANEPE.JDFPAGJHCKG$$.ctor @ RVA 0x30A6310

void IGFGDDANEPE_JDFPAGJHCKG___ctor(IGFGDDANEPE_JDFPAGJHCKG_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

