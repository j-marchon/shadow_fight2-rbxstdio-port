// EnterScreen$$BFGDICLDJLE @ RVA 0x358B0F8

void EnterScreen__BFGDICLDJLE(EnterScreen_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  
                    /* try { // try from 0368b100 to 0378b107 has its CatchHandler @ 0368b108 */
  EnterScreen__ODFHMBHFNJB(__this,method);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0368b0cc with catch @ 0368b108
                       catch(type#2 @ 00000000) { ... } // from try @ 0368b100 with catch @ 0368b108
                        */
  EnterScreen__SetVisible(__this,true,in_x2);
  return;
}

