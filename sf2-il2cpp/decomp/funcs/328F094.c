// Nekki.SF2.Core.Fights.Renders.Model.EdgeRender$$set_Edge @ RVA 0x328F094

void Nekki_SF2_Core_Fights_Renders_Model_EdgeRender__set_Edge
               (Nekki_SF2_Core_Fights_Renders_Model_EdgeRender_o *__this,GEBHIBIEAJE_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  UnityEngine_Object_o *x;
  GEBHIBIEAJE_o **ppGVar2;
  
                    /* try { // try from 0338f0b0 to 0348f0db has its CatchHandler @ 0338f0fc */
  if ((DAT_04567305 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567305 = 1;
  }
  ppGVar2 = &(__this->fields).MOBCMLECDOO;
  *ppGVar2 = CJNHFNHJHPE;
  thunk_FUN_01c20e04(ppGVar2,CJNHFNHJHPE);
                    /* try { // try from 0338f0e8 to 0348f0eb has its CatchHandler @ 0338f108 */
  x = (UnityEngine_Object_o *)(__this->fields).ICLKKKJNGGO;
                    /* try { // try from 0338f0ec to 0348f0ef has its CatchHandler @ 0338f100 */
                    /* try { // try from 0338f0f0 to 0348f0f3 has its CatchHandler @ 0338f0f4 */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0338f0f0 with catch @ 0338f0f4
                       try { // try from 0338f0f4 to 0348f123 has its CatchHandler @ 0338ef68 */
    thunk_FUN_01ba7564();
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0338f06c with catch @ 0338f0f8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0338f0b0 with catch @ 0338f0fc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0338f0ec with catch @ 0338f100
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0338f03c with catch @ 0338f104
                        */
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0338f0e8 with catch @ 0338f108
                        */
  if (bVar1) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0338efd4 with catch @ 0338f10c
                        */
    Nekki_SF2_Core_Fights_Renders_Model_EdgeRender__HEDOCGMPGKM(__this,method_00);
    return;
  }
                    /* try { // try from 0338f124 to 0348f13b has its CatchHandler @ 0338f194 */
  return;
}

