
package banda_music;

public class Integrantes extends Instrumento
{
    Instrumento miinstrumento;
    public Integrantes(Instrumento ins)
    {
        miinstrumento = ins;
    }
    
    public void TocarInstrumento()
    {
        miinstrumento.tocar('c');
    }
    
     public void CambiarInstrumento(Instrumento ins)
    {
        miinstrumento = ins;
    }
    
}
