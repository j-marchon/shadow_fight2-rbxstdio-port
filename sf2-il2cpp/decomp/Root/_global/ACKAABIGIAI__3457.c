// TypeDefIndex 3457
// Namespace: 
// public class ACKAABIGIAI : DGCPNJOFKON
// Fields:
//   private BKHDDKOEEKP.BGGNJLLOHII COADGGJOCKF; // 0x6C

// ===== protected override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x356873C]
// ACKAABIGIAI$$HNIHOIAMDPC @ RVA 0x356873C

void ACKAABIGIAI__HNIHOIAMDPC
               (ACKAABIGIAI_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  int32_t iVar1;
  
  AJNNHGGLGIF__HNIHOIAMDPC((AJNNHGGLGIF_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  iVar1 = FCFEFEBAILK__INAPKENHIEC(AHDGNOJPPIB,(MethodInfo *)0x0);
  *(int32_t *)&(__this->fields).super.super.field_0x5c = iVar1;
  return;
}


// ===== protected override bool DFBPBPPNIBC(JMIFGHKOLCL LDOOMGABFME)  [RVA 0x3568770]
// ACKAABIGIAI$$DFBPBPPNIBC @ RVA 0x3568770

bool ACKAABIGIAI__DFBPBPPNIBC(ACKAABIGIAI_o *__this,JMIFGHKOLCL_o *LDOOMGABFME,MethodInfo *method)

{
  undefined1 uVar1;
  
  if (LDOOMGABFME == (JMIFGHKOLCL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((LDOOMGABFME->fields).ELCBIMMGAFJ == 10) {
    return false;
  }
                    /* WARNING: Could not recover jumptable at 0x036687b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(__this->klass->vtable)._21_FPEEJMINKBI.methodPtr)
                    (__this,(ulong)((LDOOMGABFME->fields).DJCKADHHMAC <
                                   *(int *)&(__this->fields).super.super.field_0x5c),
                     (__this->klass->vtable)._21_FPEEJMINKBI.method);
  return (bool)uVar1;
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB, HEDFKJBDBFN HEHMPFLAEGE)  [RVA 0x35687B8]
// ACKAABIGIAI$$.ctor @ RVA 0x35687B8

void ACKAABIGIAI___ctor(ACKAABIGIAI_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,int32_t HEHMPFLAEGE,
                       MethodInfo *method)

{
  ACKAABIGIAI_c *pAVar1;
  
  DGCPNJOFKON___ctor((DGCPNJOFKON_o *)__this,AHDGNOJPPIB,HEHMPFLAEGE,0xd,(MethodInfo *)0x0);
  pAVar1 = __this->klass;
  *(undefined4 *)&(__this->fields).super.super.field_0x5c = 0;
  (__this->fields).super.super.EGBPMNKKPFI = false;
  (*(pAVar1->vtable)._12_HNIHOIAMDPC.methodPtr)
            (__this,AHDGNOJPPIB,(pAVar1->vtable)._12_HNIHOIAMDPC.method);
  CNIGOFCKBGI__DENNGFKNHKO((CNIGOFCKBGI_o *)__this,8,(MethodInfo *)0x0);
  return;
}

