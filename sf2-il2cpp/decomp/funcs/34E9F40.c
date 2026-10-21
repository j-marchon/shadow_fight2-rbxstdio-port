// OLKKAIFGGAK$$HLCMLOBHLDA @ RVA 0x34E9F40

void OLKKAIFGGAK__HLCMLOBHLDA
               (OLKKAIFGGAK_o *__this,UnityEngine_Color_o EFJKPCADGJH,bool IAEMHMIBIPC,
               MethodInfo *method)

{
  Nekki_SF2_Core_Fights_Renders_Model_ModelCapsuleRendererHolder_o *__this_00;
  Nekki_SF2_Core_Fights_Renders_Model_MeshRender_o *pNVar1;
  OLKKAIFGGAK_o *pOVar2;
  
  pOVar2 = (__this->fields).NFMBPIPEKGF;
  __this_00 = (__this->fields).HJFIJBGFECC;
  if ((pOVar2 == (OLKKAIFGGAK_o *)0x0) || (IAEMHMIBIPC)) {
                    /* try { // try from 035e9fc0 to 036e9fc3 has its CatchHandler @ 035e9fec */
    if (__this_00 != (Nekki_SF2_Core_Fights_Renders_Model_ModelCapsuleRendererHolder_o *)0x0) {
                    /* try { // try from 035e9fc4 to 036e9ffb has its CatchHandler @ 035e9ce0 */
      Nekki_SF2_Core_Fights_Renders_Model_ModelCapsuleRendererHolder__ChangeColor
                (__this_00,EFJKPCADGJH,(MethodInfo *)0x0);
      pNVar1 = (__this->fields).GDGLJMKPFOO;
      if (pNVar1 != (Nekki_SF2_Core_Fights_Renders_Model_MeshRender_o *)0x0) {
                    /* catch() { ... } // from try @ 035e9fc0 with catch @ 035e9fec */
        Nekki_SF2_Core_Fights_Renders_Model_MeshRender__set_Color
                  (pNVar1,EFJKPCADGJH,(MethodInfo *)0x0);
                    /* try { // try from 035e9ffc to 036ea003 has its CatchHandler @ 035ea018 */
        (__this->fields).EEKNEMEIBOJ.fields.r = EFJKPCADGJH.fields.r;
        (__this->fields).EEKNEMEIBOJ.fields.g = EFJKPCADGJH.fields.g;
                    /* try { // try from 035ea004 to 036ea00f has its CatchHandler @ 035e9ce0 */
        (__this->fields).EEKNEMEIBOJ.fields.b = EFJKPCADGJH.fields.b;
        (__this->fields).EEKNEMEIBOJ.fields.a = EFJKPCADGJH.fields.a;
                    /* try { // try from 035ea010 to 036ea017 has its CatchHandler @ 035ea018 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035e9ffc with catch @ 035ea018
                       catch(type#2 @ 00000000) { ... } // from try @ 035ea010 with catch @ 035ea018
                        */
        return;
      }
    }
  }
  else if (__this_00 != (Nekki_SF2_Core_Fights_Renders_Model_ModelCapsuleRendererHolder_o *)0x0) {
    Nekki_SF2_Core_Fights_Renders_Model_ModelCapsuleRendererHolder__ChangeColor
              (__this_00,(UnityEngine_Color_o)(pOVar2->fields).EEKNEMEIBOJ.fields,(MethodInfo *)0x0)
    ;
    pOVar2 = (__this->fields).NFMBPIPEKGF;
                    /* try { // try from 035e9f98 to 036e9f9b has its CatchHandler @ 035e9fa0 */
    if ((pOVar2 != (OLKKAIFGGAK_o *)0x0) &&
       (pNVar1 = (__this->fields).GDGLJMKPFOO,
       pNVar1 != (Nekki_SF2_Core_Fights_Renders_Model_MeshRender_o *)0x0)) {
                    /* try { // try from 035e9f9c to 036e9fbf has its CatchHandler @ 035e9ce0 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035e9f98 with catch @ 035e9fa0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035e9e08 with catch @ 035e9fa4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035e9df0 with catch @ 035e9fa8
                        */
      Nekki_SF2_Core_Fights_Renders_Model_MeshRender__set_Color
                (pNVar1,(UnityEngine_Color_o)(pOVar2->fields).EEKNEMEIBOJ.fields,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 035ea01c to 036ea0b3 has its CatchHandler @ 035ea01c
                       catch() { ... } // from try @ 035ea01c with catch @ 035ea01c
                       catch() { ... } // from try @ 035ea0bc with catch @ 035ea01c
                       catch() { ... } // from try @ 035ea100 with catch @ 035ea01c
                       catch() { ... } // from try @ 035ea144 with catch @ 035ea01c
                       catch() { ... } // from try @ 035ea174 with catch @ 035ea01c */
  FUN_01bab8c8();
}

